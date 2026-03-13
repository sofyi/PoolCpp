/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:19:55 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/13 05:53:25 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span() {}
Span::Span(unsigned int N):N(N) {}
Span::Span(): N(0), ListInteger(NULL) {}
Span::Span (const Span &obj)
{
    N = obj.N;
    ListInteger = obj.ListInteger;
}

Span& Span::operator=(const Span obj)
{
    if (this != &obj)
    {
        N = obj.N;
        ListInteger = obj.ListInteger;    
    }
    return *this;
}

//___________________--MemberFunctio--___________

void Span::addNumber(long n)
{
    if (ListInteger.size() == N)
        throw std::__throw_length_error;// taked had obj wla sho
    ListInteger.push_back(n);
}
long Span::shortestSpan()
{
    
}
long longestSpan()
{
    
}