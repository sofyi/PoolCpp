/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:50:39 by slamhaou          #+#    #+#             */
/*   Updated: 2026/10/23 21:51:35 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//_________________________________________--OrthoDox--_________________________

BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	*this = obj;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
		Data = obj.Data;
	return *this;
}

//________________________________---MemberFunction--_______________________________

void	BitcoinExchange::ReadData()
{
	std::string key;
	std::string Value;
	std::stringstream stremString;
	std::ifstream DataF("data.csv");

	if (!DataF.is_open())
		throw std::runtime_error("Error: could not open Database file.");
	if (DataF.peek() == std::ifstream::traits_type::eof())
		throw std::runtime_error("Error: empty file.");
	DataF.seekg(0);

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
	std::stringstream strm;

	if (val[0] != ' ')
		return "error syntax value no space after |";
	val.erase(val.begin());
	if ((val[0] == '-' || val[0] == '+') && !isalnum(val[1]))
		return "error syntax value";
	if (val[0] == '+')
		val.erase(val.begin());
	if (val[0] == '-')
		return " not a positive number";
	if (val.find(" \t") != val.npos || val.find_first_not_of("1234567890.") != val.npos || std::count(val.begin(), val.end() , '.') > 1)
		return "error syntax value";
	strm << val;
	strm >> v;	
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
	if (it == Data.end() || (it->first != key && it != Data.begin()))
		it--;
	if (it->first != key && it == Data.begin())
		throw std::runtime_error("Error: no data available for the given date.");
	return it->second * v;
}

void	BitcoinExchange::RedInputFile(const std::string &nameFile)
{
	std::string key;
	std::string val;
	std::string msg;
	std::ifstream InputF(nameFile);

	if (!InputF.is_open())
		throw std::runtime_error("Error: could not open file.");
	if (InputF.peek() == std::ifstream::traits_type::eof())
		throw std::runtime_error("Error: empty file.");
	InputF.seekg(0);
	
	while (std::getline(InputF, key))
	{
		if ( key == "date | value")
			break;
		std::cout << "bad input must be {date | value}" << std::endl; 
	}
	if (InputF.eof())
		throw std::runtime_error("Error: failed to read header from file.");
	
	while (std::getline(InputF, key))
	{	
		if (std::count(key.begin(), key.end(), '|') != 1)
		{
			std::cout << "error syntax -> " << key << std::endl; 
			continue;
		}
		val = key.substr((key.find("|") + 1));
		key = key.substr(0, key.find("|"));
		if (Parskey(key) != Success)
		{
			std::cout << "Error: bad Date => {" << key << "}" << std::endl;
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
