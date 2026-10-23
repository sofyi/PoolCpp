/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 06:12:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/10/23 21:31:53 by slamhaou         ###   ########.fr       */
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
#include <stdexcept>
#define Success 0
#define  faill -1
#define BadDate -2

class BitcoinExchange
{
	private:
		std::map<std::string , double> Data;
		double Exchange(std::string &val, std::string &key);
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &obj);
		BitcoinExchange &operator=(const BitcoinExchange &obj);
		
	//__________________MemberFunction__________________
	
	void	ReadData();
	void	RedInputFile(const std::string &s);
};