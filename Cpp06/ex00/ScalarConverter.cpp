/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:24:11 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 16:31:10 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <cstdlib>
#include <cctype>
#include <iomanip>
void    InputIsChar(std::string input)
{
    char ch;
    int  in;
    double doubl;
    float flot;
    //Implicit Casting
    ch = input[0];
    doubl = input[0];
    in = input[0];
    flot = input[0];
    std::cout << "char : " << ch << std::endl;
    std::cout << "int : " << in << std::endl;
    std::cout << "float : " << flot << std::fixed << std::setprecision(1) << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << doubl << std::endl;
}
void ScalarConverter::convert(std::string input)
{
    if (input.size() == 1 && isascii(input[0]))
        InputIsChar(input);
}