/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:24:11 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/21 12:44:34 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

 
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

int NumAfterPoint(const std::string &input)
{
    size_t index;
    size_t i;

    i = 0;
    index = static_cast<int>(input.find("."));
    if (index == input.npos || input[index + 1] == 'f')
        return (1);
    index++;
    for(i = 0; index < input.size(); index++)
    {
        if (input[index] == 'f')
            return i;
        i++;
    }
    return (i);
}

void    CharConvert(const std::string &input)
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

void Infynity(const std::string &input)
{
    char *p;
    double conv;

    conv = strtod(input.c_str(), &p);
    if ((p[0] != '\0' && p[0] != 'f')||( p[0] == 'f' && (p[1] != '\0')) || (input.find(" ") != std::string::npos))
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
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

template<typename T>
void    printed(T Int, const std::string &input)
{
    if (Int > 127 || Int < 0)
        std::cout << "char: impossible"<< std::endl;
    else
    {
        if (!isprint(Int))
              std::cout << "char: Non displayable"<< std::endl;
        else
            std::cout << "char: '" << static_cast<char>(Int)<< "'" << std::endl;
    }
    if (Int > INT_MAX || Int < INT_MIN)
        std::cout << "int: impossible"<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(Int)<< std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(NumAfterPoint(input)) << static_cast<float>(Int) << "f" << std::endl;
    std::cout << "double: "<< std::setprecision(NumAfterPoint(input)) << static_cast<double>(Int) << std::endl;
}

void    ToInt(const std::string &input)
{
    long Int;
    char *p;
    // std::cout << "this is int" << std::endl;
    Int = strtol(input.c_str(), &p,10);
    if (p[0] != '\0')
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    printed(Int, input);
}

void ToFloat(const std::string &input)
{
    float F;
    char *p;
    
    // std::cout << "this is float" << std::endl;
    F = strtof(input.c_str(), &p);
    if ((p[0] == 'f' && *(p+1) != '\0' ) || (input.find(" ") != input.npos) ||  p[0] != 'f')
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    printed(F, input);
}

void    ToDouble(const std::string &input)
{
    double Double;
    char *p;
    
    // std::cout << "this is double" << std::endl;
    Double = strtod(input.c_str(), &p);
    if (p[0] || input.find(" ") != input.npos)
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    printed(Double, input);
    
}

bool IsAllDigit(const std::string &input)
{
    size_t index;

    for(index = 0; index < input.size(); index++)
        if (!std::isdigit(input[index]))
            return false;
    return true;
}
int pars(const std::string &input)
{
    if (input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf" || std::isnan(strtod(input.c_str(), NULL)))
        return 0;
    if (input.size() == 1 && !isdigit(input[0]))
        return 1;
    if (input.find_last_of("f. ") == std::string::npos && IsAllDigit(input))
        return 2;
    if (input.find("f") != input.npos && input.find(" ") == input.npos)
        return 3;
    if (input.find(".") != input.npos)
        return 4;
    return (-1);
}
void ScalarConverter::convert(const std::string &input)
{
    int Index;

    Index = pars(input);

    switch(Index)
    {
        case 0:
            Infynity(input);
            break;
        case 1:
            CharConvert(input);
            break;
        case 2:
            ToInt(input);
            break;
        case 3:
            ToFloat(input);
            break;
        case 4:
            ToDouble(input);
            break;
        default:
            std::cout << "ttttt hada mafy zen" << std::endl;
    }
}
