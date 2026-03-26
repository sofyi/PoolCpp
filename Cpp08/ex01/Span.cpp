/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:19:55 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/26 03:21:05 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span() {}
Span::Span(): N(0), VArr() {}
Span::Span(unsigned int N):N(N) 
{
    if (N < 2)
        throw ErrorSpan();
}
Span::Span (const Span &obj)
{
    N = obj.N;
    VArr = obj.VArr;
}

Span& Span::operator=(const Span &obj)
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



void Span::addNumber(int n)
{
    if (VArr.size() == N)
        throw ErrorSpan();
    VArr.push_back(n);
}

long Span::shortestSpan()const 
{
    long shorts;
    long res;
    std::vector<int>::const_iterator it;
    std::vector<int> VArrSort;

    if (VArr.size() < 2)
        throw ErrorSpan();
    VArrSort = VArr;
   std::sort(VArrSort.begin(), VArrSort.end());
   it  = VArrSort.begin();
   shorts = std::numeric_limits<long>::max();
   while (it != VArrSort.end() - 1)
   {
        res = static_cast<long>(*(it + 1)) - static_cast<long>(*it);
        if (res < shorts)
            shorts = res;
        it++;
   }
    return shorts;
}

long Span::longestSpan()const 
{
    if (VArr.size() < 2)
          throw ErrorSpan();
    return static_cast<long>(*std::max_element(VArr.begin(), VArr.end())) - static_cast<long>(*std::min_element(VArr.begin(), VArr.end()));
}
