/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:51:59 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/02 10:37:57 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return std::cout << "Error input"<< std::endl, 1;

    BitcoinExchange ex(av[1]);
    try
    {
           ex.ReadData();
        ex.RedInputFile();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
 
}