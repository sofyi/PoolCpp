/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:19:55 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/17 19:41:48 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span() {}
Span::Span(unsigned int N):N(N) 
{
    if (N == 0)
        throw ErrorSpan();
}
Span::Span(): N(0), VArr(0) {}
Span::Span (const Span &obj)
{
    N = obj.N;
    VArr = obj.VArr;
}

Span& Span::operator=(const Span obj)
{
    if (this != &obj)
    {
        N = obj.N;
        VArr = obj.VArr;    
    }
    return *this;
}
const char* Span::ErrorSpan:: what() const throw()
{
    return "Error Span";
}

//_______________________--MemberFunctio--_______________



void Span::addNumber(long n)
{
    if (VArr.size() == N)
        throw ErrorSpan();
    VArr.push_back(n);
}

long Span::shortestSpan()
{
    long shorts;
    long res;
    std::vector<long>::iterator it;

    if (N == 1)
        throw ErrorSpan();
   it  = VArr.begin();
   shorts = LONG_MAX;
   while (it != VArr.end())
   {
        res = abs( *it - *(it + 1) );
        if (res < shorts)
            shorts = res;
        it++;
   }
    return shorts;
}

long Span::longestSpan()
{
    if (N == 1)
          throw ErrorSpan();
    return *std::max_element(VArr.begin(), VArr.end()) - *std::min_element(VArr.begin(), VArr.end());
  
}
