/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 06:12:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/03 21:22:41 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>
#include <algorithm>
#define BadDate -1
#define BadYear -2
#define BadMonth -3
#define BadDay -4

class BitcoinExchange
{
	private:
		BitcoinExchange();
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