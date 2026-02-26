/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:24:11 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/24 13:35:44 by slamhaou         ###   ########.fr       */
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

//----------------------------------Casting---------------------------------

size_t NumAfterPoint(const std::string &input)
{
    size_t index;
    size_t i;

    i = 0;
    index = input.find(".");
    if (index == input.npos || input[index + 1] == 'f' || !index)
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

// --------------------------TmplateFunction---------------------------

template<typename T>
void    printed(T Typ)
{
    if (Typ > 127 || Typ < 0)
        std::cout << "char: impossible"<< std::endl;
    else
    {
        if (!isprint(static_cast<int>(Typ)))
              std::cout << "char: Non displayable"<< std::endl;
        else
            std::cout << "char: '" << static_cast<char>(Typ)<< "'" << std::endl;
    }
    if (Typ > std::numeric_limits<int>::max() || Typ < std::numeric_limits<int>::min())
        std::cout << "int: impossible"<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(Typ)<< std::endl;
    std::cout << "float: " << static_cast<float>(Typ) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(Typ) << std::endl;    
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
    std::cout << "float : " << ToFloat << "f" << std::endl;
    std::cout << "double : " << ToDouble << std::endl;
}

void Infynity(const std::string &input)
{
    char *p;
    double conv;
    
    conv = strtod(input.c_str(), &p);
    if ((p[0] != '\0' && p[0] != 'f')||( p[0] == 'f' && (p[1] != '\0')))
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    std::cout << "char : " << "impossible" << std::endl;
    std::cout << "int : " << "impossible" << std::endl;
    std::cout << "float : " <<  static_cast<float>(conv) << "f" << std::endl;
    std::cout << "double : " << conv << std::endl;
}

void    ToInt(const std::string &input)
{
    long Int;
    char *p;

    Int = strtol(input.c_str(), &p,10);
    if (p[0] != '\0')
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    printed(Int);
}

void ToFloat(const std::string &input)
{
    float F;
    char *p;
    
    F = strtof(input.c_str(), &p);
    if ((p[0] == 'f' && *(p+1) != '\0' ) || p[0] != 'f')
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    printed(F);
}

void    ToDouble(const std::string &input)
{
    double Double;
    char *p;

    Double = strtod(input.c_str(), &p);
    if (p[0])
    {
        std::cout << "❌Error input❌" << std::endl;
        return ;
    }
    printed(Double);
}

int pars(const std::string &input)
{
    double conv;
    char *p;

    conv = strtod(input.c_str(), &p);
    if ((isnan(conv) && input[0] != 'n') || (isnan(conv) && !(!p[0] || p[0] == 'f'))|| input.find(" ") != input.npos)
        return -1;
    if ((std::isinf(conv) && (input[0] == '+' || input[0] == '-')) || (isnan(conv)))
        return 0;
    if (input.size() == 1 && !isdigit(input[0]))
        return 1;
    if (input.find_last_not_of("+-0123456789") == input.npos &&
        conv < std::numeric_limits<int>::max() && conv > std::numeric_limits<int>::lowest())
        return 2;
    if (input.find_last_not_of("+-0123456789.f") == input.npos && input.find("f") != input.npos)
        return 3;
    if (input.find_last_not_of("+-0123456789.") == input.npos)
        return 4;
    return (-1);
}

//______________________MEMBER FUNCTION___________________________

void ScalarConverter::convert(const std::string &input)
{
    int Index;
    
    Index = pars(input);
    std::cout << std::fixed << std::setprecision(static_cast<int> (NumAfterPoint(input)));
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
            std::cout << "❌invalid input❌" << std::endl;
    }
}
