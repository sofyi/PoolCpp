/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:50:39 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/03 21:50:12 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <sstream>
#include <ctime>
//_________________________________________--OrthoDox--_________________________

BitcoinExchange::~BitcoinExchange(){};
BitcoinExchange::BitcoinExchange():DataF("data.csv"){}
BitcoinExchange::BitcoinExchange(std::string FileInut):InputF(FileInut.c_str(), std::ios::ate), DataF("data.csv", std::ios::ate)
{
	if (!DataF.is_open() || !DataF.tellg())
	{
			std::cout << "ccc" << std::endl;
		throw BadFile();
	}
	if (!InputF.is_open() || !InputF.tellg())
	{
		std::cout << "ggg" << std::endl;
		throw BadFile();
	}
	DataF.seekg(0);
	InputF.seekg(0);
	InputName = FileInut;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	Data  = obj.Data;	
	InputName = obj.InputName;
	InputF.open(InputName);
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
	{
		Data  = obj.Data;	
		InputName = obj.InputName;
		InputF.close();
		InputF.open(InputName);
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
	// std::map<std::string, double>::iterator itb = Data.begin();
	// while (itb != Data.end())
	// {
	// 	std::cout << "key : " << (*itb).first  << "and value : " <<std::fixed << std::setprecision(2) <<(*itb).second << std::endl;
	// 	itb++;
	// }
}

int	validDate(std::string date)
{
	char sep;
	int y,m,d;
	std::stringstream streamstr;

	streamstr << date;
	streamstr >> y >> sep >> m >> sep >> d;
	if (y > 2026 || y < 2009)
		return BadYear;
	if (m < 1 || m > 12)
		return BadMonth;
	if (d < 1 || d > 31)
		return BadDay;
	switch (m)
	{
		case 2:
			if (y % 4 != 0 && d == 29)
				return BadYear;
		case 1,3,
			
	}
	
}

int	ParsDate(std::string &date)
{
	std::stringstream stremString;
	int i;

	i = 0;
	if (std::count(date.begin(), date.end(), '-') != 2)
		return BadDate;
	if (*(date.end() - 1) == ' ' && (date.size() == 11))
	{
		date.erase(date.end() - 1);
		if (date.find_first_not_of("1234567890-") != std::string::npos || date[4] != '-' || date[7] != '-')
			return BadDate;
		validDate(date);
		return 1;
	}
	return BadDate;
}
void	BitcoinExchange::RedInputFile()
{
	std::string key;
	std::string val;

	while (true)
	{
		std::getline(InputF, key);
		if ( key != "date | value")
		{
			std::cout << "bad input must be {date | value}" << std::endl;
			continue;
		}
		break;
	}
	if (key == "date | value")
	{
		while (!InputF.eof())
		{
		 	std::getline(InputF, key, '|');
			if (!ParsDate(key))
				throw BadFile();
			std::cout << "string {" << key << "}"<< std::endl;
			break;
			std::getline(InputF, key, '|');
			// if (!ValuePars(val))
			// 	throw BadFile();
		}
	}
	else
		throw BadFile();
}
// void	ExchangeFile();