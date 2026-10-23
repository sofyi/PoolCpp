/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:51:59 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/07 21:28:25 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return std::cerr << "Error input"<< std::endl, 1;
    try
    {
        BitcoinExchange ex(av[1]);
           ex.ReadData();
        ex.RedInputFile();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}