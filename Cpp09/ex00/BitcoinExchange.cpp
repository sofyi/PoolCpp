/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:50:39 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/07 22:04:02 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//_________________________________________--OrthoDox--_________________________

BitcoinExchange::~BitcoinExchange(){};
BitcoinExchange::BitcoinExchange():DataF("data.csv"){}
BitcoinExchange::BitcoinExchange(std::string FileInut): DataF("data.csv", std::ios::ate) , InputF(FileInut.c_str(), std::ios::ate)//at heya at end 
{
	if (!DataF.is_open() || !DataF.tellg())
		throw BadFile();
	if (!InputF.is_open() || !InputF.tellg())
		throw BadFile();
	DataF.seekg(0);
	InputF.seekg(0);
	InputName = FileInut;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	Data  = obj.Data;	
	InputName = obj.InputName;
	InputF.open(InputName.c_str());
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
	{
		DataF.close();
		DataF.open("data.csv");
		InputF.close();
		InputF.open(InputName.c_str());
		Data  = obj.Data;	
		InputName = obj.InputName;
	}
	return *this;
}
//_______________________________---InnerClass--_________________________________

const char* BitcoinExchange::BadFile::what() const throw()
{
	return "BadFile";
}

//________________________________---MemberFunction--_______________________________

void	BitcoinExchange::ReadData()
{
	std::string key;
	std::string Value;
	std::stringstream stremString;
	
	std::getline(DataF, key);
	while (std::getline(DataF, key, ','))
	{
		std::getline(DataF, Value, '\n');
		stremString << Value;
		stremString >> Data[key];
		stremString.clear();
	}
}

int	validDate(std::string date)
{
	char sep;
	int y,m,d;
	int max;
	std::stringstream streamstr;

	streamstr << date;
	streamstr >> y >> sep >> m >> sep >> d;
	if (y > 2026 || y < 2009)
		return faill;
	if (m < 1 || m > 12)
		return faill;
	if (d < 1 || d > 31)
		return faill;
	max = 31;
	switch (m)
	{
		case 2:
			if (y % 4 == 0)
				max = 29;
			else
				max = 28;
			break;
		case 4:case 6:case 9:case 11:
			max = 30;
			break;	
	}
	if (d > max)
		return faill;
	return Success;
	
}

int	Parskey(std::string &date)
{
	if (*(date.end() - 1) == ' ' && (date.size() == 11))
	{
		date.erase(date.end() - 1);
		if (date.find_first_not_of("1234567890-") != std::string::npos || date[4] != '-' || date[7] != '-')
			return BadDate;
		if (validDate(date) != Success)
			return BadDate;
		return Success;
	}
	return BadDate;
}

std::string ParsValue(std::string &val)
{
	double v;
	int sin;
	std::stringstream strm;
	
	sin = '+';
	if (val[0] != ' ')
		return "error syntax value no space after |";
	val.erase(val.begin());
	if ((val[0] == '-' || val[0] == '+') && !isalnum(val[1]))
		return "error syntax value";
	if (val[0] == '-' || val[0] == '+')
	{
		sin = val[0];
		val.erase(val.begin());
	}

	if (val.find(" \t") != val.npos || val.find_first_not_of("1234567890.") != val.npos || std::count(val.begin(), val.end() , '.') > 1)
		return "error syntax value";
	strm << val;
	strm >> v;	
	if (sin == '-')
		return " not a positive number";
	if ( v > 1000)
		return "too large a number";
	return "success";
}

double BitcoinExchange::Exchange(std::string &val, std::string &key)
{
	std::stringstream stream;
	double v;

	stream << val;
	stream >> v;
	std::map<std::string, double>::iterator it;

	it = Data.lower_bound(key);
	it--;
	return it->second * v;
}

void	BitcoinExchange::RedInputFile()
{
	std::string key;
	std::string val;
	std::string msg;

	while (true)
	{
		std::getline(InputF, key);
		if ( key == "date | value")
			break;
		if (InputF.eof())
			throw BadFile();
		std::cout << "bad input must be {date | value}" << std::endl; continue;
	}
	while (!InputF.eof())
	{
		std::getline(InputF, key);
		if (std::count(key.begin(), key.end(), '|') != 1)
		{
			std::cout << "error syntax -> " << key << std::endl; 
			continue;
		}
		val = key.substr((key.find("|") + 1));
		key = key.substr(0, key.find("|"));
		if (Parskey(key) != Success)
		{
			std::cout << "Error: bad input => " << key << std::endl;
			 continue;
		}
		msg = ParsValue(val);
		if (msg != "success")
		{
			std::cout << "Error : " << msg << std::endl;
			continue;
		}
		std::cout << key << " => " << val << " = " << Exchange(val, key) << std::endl;	
	}
}
