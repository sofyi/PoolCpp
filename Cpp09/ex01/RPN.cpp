/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 11:41:32 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/08 20:39:37 by slamhaou         ###   ########.fr       */
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
        std::cout << n1 << std::endl;
        st.pop();
        res = n1 * st.top();
        st.pop();
        st.push(res);
    }
}

void add(std::stack<int> &st)
{
    int res;
    int n1;
    res = -1;
    if (st.size() > 1)
    {
        n1 = st.top();
        st.pop();
        res = n1 + st.top();
        st.pop();
        st.push(res);
    }
}

void subtrac(std::stack<int> &st)
{
    int res;
    int n1;
    int n2;
    res = -1;
    if (st.size() > 1)
    {
        n1 = st.top();
        st.pop();
        n2 = st.top();
        st.pop();
        res = n2 - n1;
        st.push(res);
    }
}

void division(std::stack<int> &st)
{
        int res;
    int n1;
    int n2;
    res = -1;
    if (st.size() > 1)
    {
        n1 = st.top();
        st.pop();
        n2 = st.top();
        st.pop();
        res = n2 / n1;
        st.push(res);
    }
}

int RPN::calculate(std::string Math)
{
    int Res;
    int number;
    std::string sep;
    std::string::iterator itb;
    std::stringstream strem;
    std::stringstream changestream;

    Res = 0;
    number = -3;
    if (Math.find_first_not_of("0123456789+-*/ ") != Math.npos)
        throw std::out_of_range("Error:: Number only and operator {*, +, -, /}");
    strem << Math;
    while (!strem.eof())
    {
        strem >> sep;
      
        if (isdigit(sep[0]))
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
                    multip(IntStack);
                    break;
                case '+':
                    std::cout << "hadaaa zaayd " << std::endl;
                   add(IntStack);
                    break;
                case '-':
                    subtrac(IntStack);
                    break;
                case '/':
                    division(IntStack);
                    break;
            }
        }
    }

    std::cout <<  "size " << IntStack.size() << "the res" <<  IntStack.top() << std::endl;
    while (IntStack.size() > 0)
    {
        std::cout << "elemnt in stack -> " << IntStack.top() << std::endl;
        IntStack.pop();
    }
    return Res;
}