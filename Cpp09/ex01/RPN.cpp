/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 11:41:32 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/08 18:49:29 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

void multip(std::stack<int> &st)
{
    int res;
    int n1;
    res = -1;
    if (st.size() > 1)
    {
        n1 = st.top();
        st.pop();
        res = n1 * st.top();
        st.pop();  
    }
    return res;
}

void add(std::stack<int> &st)
{
    (void)st;
}

void subtrac(std::stack<int> &st)
{
    (void)st;
}

void division(std::stack<int> &st)
{
    (void)st;
}

int RPN::calculate(std::string Math)
{
    int Res;
    int number;
    std::string::iterator itb;
    std::stringstream strem;

    Res = 0;
    number = -3;
    if (Math.find_first_not_of("0123456789+-*/ ") != Math.npos)
        throw std::out_of_range("Error:: Number only and operator {*, +, -, /}");
    strem << Math;// tchake emta katkon stream tru owla katkon !stream
    while (true)
    {
        strem >> number;
        if (strem.eof())
            break;
        if (number > 10 )
            throw std::out_of_range(" rang of number < 10");
        IntStack.push(number);
        if (strem.fail())
        {
            char c = strem.peek();
            switch (c)
            {
            case '*':
                multip(IntStack);
                break;
            case '+':
                add(IntStack);
                break;
            case '-':
                subtrac(IntStack);
                break;
            case '/' :
                division(IntStack);
                break;
            }
        }
        IntStack.push(number);
    }
    return Res;
}