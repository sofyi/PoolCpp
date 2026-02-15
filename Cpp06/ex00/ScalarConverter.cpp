/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:24:11 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/15 15:33:19 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <cstdlib>
#include <cmath>
#include <cctype>
#include <iomanip>
//-_________________________________ORTHO DOX________________________________

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    (void)obj;
}
 
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
    return (*this);
}

//______________________MEMBER FUNCTION___________________________

int NumberAfterPoint(std::string input)
{
    int RetValue;
    size_t index;
    
    RetValue = 0;
    index = static_cast<int>(input.find("."));
    if (index == input.npos)
        return (1);
    index++;
    while (index != input.size() && input[index] != 'f')
    {
        RetValue++;
        index++;
    }
    return RetValue;
}

void    IntDFConvert(std::string input, char *p, double conv)
{
    int ToInt;

    if ((p[0] != '\0' && p[0] != 'f')||( p[0] == 'f' && (p[1] != '\0')) || (input.find(" ") != std::string::npos))
        throw "Not Valid Caracter";
    ToInt = static_cast<int>(conv);
 
    if (std::isnan(conv) || (conv > INT_MAX || conv < INT_MIN) || (ToInt > 127 || ToInt < 0))
        std::cout << "char : " << "impossible" << std::endl;
    else if (!isprint(static_cast<char>(conv)))
        std::cout << "char : " << "Non displayable" << std::endl;
    else
        std::cout << "char : '" << static_cast<char>(conv) <<  "'" << std::endl;
    if (conv > INT_MAX || conv < INT_MIN)
        std::cout << "int : " << "impossible" << std::endl;
    else
        std::cout << "int : " << ToInt << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(NumberAfterPoint(input)) << static_cast<float>(conv) << "f" << std::endl;
    std::cout << "double : " << std::setprecision(NumberAfterPoint(input)) << conv << std::endl;
}

void    CharConvert(std::string input)
{
    char Tochar;
    int  ToInt;
    double ToDouble;
    float ToFloat;
  
    ToInt = input[0];
    Tochar = input[0];
    ToFloat = input[0];
    ToDouble = input[0];
   
    if (!isprint(Tochar))
        std::cout << "char : " << "Non displayable" << std::endl;
    else
        std::cout << "char : '" << Tochar << "'" << std::endl;
    std::cout << "int : " << ToInt << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << ToFloat << "f" << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << ToDouble << std::endl;
}

void Infynity(double conv, char *p, std::string input)
{
    if ((p[0] != '\0' && p[0] != 'f')||( p[0] == 'f' && (p[1] != '\0')) || (input.find(" ") != std::string::npos))
        throw "Not Valid Caracter";
    std::cout << "char : " << "impossible" << std::endl;
    std::cout << "int : " << "impossible" << std::endl;
    if (input[0] != '-' && input != "nan" && input != "nanf")
    {
        std::cout << "float : +" << conv << "f" << std::endl;
        std::cout << "double : +" << conv << std::endl;
    }
    else 
    {
        std::cout << "float : " << conv << "f" << std::endl;
        std::cout << "double : " << conv << std::endl;
    }
}

void ScalarConverter::convert(std::string input)
{
    double conv;
    char *P;

    conv = strtod(input.c_str(), &P);
    if (input.size() == 1 && (isascii(input[0]) && !isdigit(input[0])))
        CharConvert(input);
   else if (std::isinf(conv) || std::isnan(conv))
   {
        try
        {
            Infynity(conv, P, input);
        }
        catch(const char *str)
        {
            std::cout << str << std::endl;
        }
          
   }
    else
    {
        try
        {
           IntDFConvert(input,P, conv);
        }
        catch(const char *e)
        {
            std::cout << e << std::endl;
        }
        
    } 
}
