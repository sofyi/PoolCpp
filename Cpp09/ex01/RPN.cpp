/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 11:41:32 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/09 13:20:25 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

void RPN::operation(char operat)
{
    int n1;
    int n2;
    
    if (IntStack.size() > 1)
    {
        n1 = IntStack.top();
        IntStack.pop();
        n2 = IntStack.top();
        IntStack.pop();
        switch (operat)
        {
            case '-':
               res = n2 - n1;
                break;
            case '+':
               res = n2 + n1;
                break;
            case '*':
               res = n2 * n1;
                break;
            case '/':
            if (n1 == 0)
                throw std::out_of_range("error : its forbedin /0");
               res = n2 / n1;
                break;
        }
        IntStack.push(res);
    }
    else
        throw std::out_of_range("alot of operators");
}

int RPN::calculate(std::string Math)
{
    int number;
    std::string sep;
    std::string::iterator itb;
    std::stringstream strem;
    std::stringstream changestream;

    if (Math.find_first_not_of("0123456789+-*/ ") != Math.npos)
        throw std::out_of_range("Error:: Number only and operator {*, +, -, /}");
    strem << Math;
    while (!strem.eof())
    {
        sep.clear();
        strem >> sep;
        if (sep.empty())
            break;
        if (sep.size() != 1 && sep[0] != '-' && sep[0] != '+')//3awed test lhado -1 +1 
            throw std::out_of_range("Error : error in syntax operator {* ,- ,+, /} numbers < 10");
        if ((sep.size() == 1 && isdigit(sep[0])) || (sep.size() == 2 && isdigit(sep[1])))
        {
            changestream.clear();
            changestream << sep;
            changestream >> number;  
            IntStack.push(number);
        }
        else
        {
            switch (sep[0])
            {
                case '*':
                   operation('*');
                    break;
                case '+':
                   operation('+');
                    break;
                case '-':
                    operation('-');
                    break;
                case '/':
                    operation('/');
                    break;
            }
        }
    }
    if (IntStack.size() != 1)
        throw std::out_of_range("error in operation");
    return IntStack.top();
}