/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 06:12:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/26 09:48:14 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string , int> Data;
		
	public:
		BitcoinExchange(std::string FileInut);
	//_____________________--innerClass--______________________
	
};