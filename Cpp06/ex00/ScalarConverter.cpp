/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:24:11 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/20 14:56:15 by slamhaou         ###   ########.fr       */
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

int NumAfterPoint(std::string input)
{
    size_t index;

    index = static_cast<int>(input.find("."));
    if (index == input.npos)
        return (1);
    return (input.size() - index -1);
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

void Infynity(const std::string &input)
{
    char *p;
    double conv;

    conv = strtod(input.c_str(), &p);
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

template<typename T>
void    printed(T Int, std::string input)
{
    if (Int > 127 || Int < 0)
        std::cout << "char: impossible"<< std::endl;
    else
    {
        if (!isprint(Int))
              std::cout << "char: notPrinted"<< std::endl;
        else
            std::cout << "char: '" << static_cast<char>(Int)<< "'" << std::endl;
    }
    if (Int > INT_MAX || Int < INT_MIN)
        std::cout << "int: impossible"<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(Int)<< std::endl;
    std::cout << "float: " <<std::fixed << std::setprecision(NumAfterPoint(input)) << static_cast<float>(Int) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(NumAfterPoint(input)) << static_cast<double>(Int) << std::endl;
}

void    ToInt(const std::string &input)
{
    long Int;
    char *p;
    std::cout << "this is int" << std::endl;
    Int = strtol(input.c_str(), &p,10);
    if (p[0] != '\0')
        return ;
    printed(Int, input);
  //setprecision -> bs hay bta3ty 2e+01
}

void Tofloat(const std::string &input)
{
    float F;
    char *p;
    
    std::cout << "this is float" << std::endl;
    F = strtof(input.c_str(), &p);
    std::cout << p[0] << std::endl;
    std::cout << *(p+1) << std::endl;
    if ((p[0] == 'f' && *(p+1) != '\0' ) || (input.find(" ") != input.npos) || (p[0] && p[0] != 'f'))
        return ;
    printed(F, input); // 3laash mn9edsh nseft input as reference f tymplate
}

void    ToDouble(std::string &input)
{
    double Double;
    char *p;
    
    std::cout << "this is double" << std::endl;
    Double = strtod(input.c_str(), &p);
    if (p[0] || input.find(" ") != input.npos)
        return ;
    printed(Double, input);
    
}
void ScalarConverter::convert(std::string input)
{
    size_t pos;
    
    if (std::isinf(strtod(input.c_str(), NULL)) || isnan(strtod(input.c_str(), NULL)))
        Infynity(input);
    if (input.size() == 1)
        CharConvert(input);
   else if (input.size() != 1 && input.find_last_of("f. ") == std::string::npos)
        ToInt(input);
    else if (input.find(" ") == input.npos)
    {
        pos = input.find("f");
        if (input.find_last_of("f") != std::string::npos && pos != input.npos && input.find(".") != input.npos)
            Tofloat(input);
        else
            ToDouble(input);
    }
}
