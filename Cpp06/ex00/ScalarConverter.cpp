/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:24:11 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/10 15:08:06 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <cstdlib>
#include <cctype>
#include <iomanip>

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    (void)obj;
}
 
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
}

void    IntDFConvert(std::string input)
{
    char ch;
    int  in;
    double doubl;
    float flot;
    double conv;
    char *p;
        
    conv = strtod(input.c_str(), &p);
    if ((p[0] != '\0' && p[0] != 'f')||( p[0] == 'f' && (p[1] != '\0')))
        throw "Not Valid Caracter";
    doubl = conv; 
    in = static_cast<int>(conv);
    ch = static_cast<char> (conv);
    flot = static_cast<float>(conv);
    if (!isprint(ch))
        std::cout << "char : " << "Non displayable" << std::endl;
    else
        std::cout << "char : " << ch << std::endl;
    if (conv > INT_MAX || conv < INT_MIN)
        std::cout << "int : " << "impossible" << std::endl;
    else
        std::cout << "int : " << in << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << flot << "f" << std::endl;
    std::cout << "double : " << std::setprecision(1) << doubl << std::endl;
}

void    CharConvert(std::string input)
{
    char ch;
    int  in;
    double doubl;
    float flot;
  
    in = input[0];
    ch = input[0];
    flot = input[0];
    doubl = input[0];
    if (!isprint(ch))
        std::cout << "char : " << "Non displayable" << std::endl;
    else
        std::cout << "char : " << ch << std::endl;
    std::cout << "int : " << in << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << flot << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << doubl << std::endl;
}

void Infynity(double conv)
{
    std::cout << "char : " << "impossible" << std::endl;
    std::cout << "int : " << "impossible" << std::endl;
    std::cout << "float : " << conv << "f" << std::endl;
    std::cout << "double : " << conv << std::endl;
}
void ScalarConverter::convert(std::string input)
{
    double conv;

    conv = strtod(input.c_str(), NULL);
    if (input.size() == 1 && (isascii(input[0]) && !isdigit(input[0])))
        CharConvert(input);
   else if (std::isinf(conv) || input == "nan")
        Infynity(conv);
    else
    {
        try
        {
            IntDFConvert(input);
        }
        catch(const char *e)
        {
            std::cout << e << std::endl;
        }
        
    } 
}
