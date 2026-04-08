/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 06:12:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/07 22:03:39 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>
#include <algorithm>
#include <sstream>

#define Success 0
#define  faill -1
#define BadDate -2

class BitcoinExchange
{
	private:
		BitcoinExchange();
		double Exchange(std::string &val, std::string &key);
		std::ifstream DataF;
		std::ifstream InputF;
		std::string InputName;
		std::map<std::string , double> Data;
	public:
		~BitcoinExchange();
		BitcoinExchange(std::string FileInut);
		BitcoinExchange(const BitcoinExchange &obj);
		BitcoinExchange &operator=(const BitcoinExchange &obj);
	//_____________________--innerClass--______________________
		class BadFile: public std::exception
		{
			public:
				const char* what() const throw();
		};
	//__________________MemberFunction__________________
	void	ReadData();
	void	RedInputFile();
	// void	ExchangeFile();
};