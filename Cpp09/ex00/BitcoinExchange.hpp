/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 06:12:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/31 11:31:04 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdexcept>

class BitcoinExchange
{
	private:
		std::map<std::string , double> Data;
		std::string InputName;
		std::ifstream InputF;
		std::ifstream DataF;
	public:
		BitcoinExchange();
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