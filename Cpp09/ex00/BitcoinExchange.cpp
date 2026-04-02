/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:50:39 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/02 10:49:15 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <sstream>
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
			if (!DatPars(key))
				throw BadFile();
			std::getline(InputF, key, '|')
			if (!ValuePars(val))
				throw BadFile();
		}
	}
	else
		throw BadFile();
}
// void	ExchangeFile();