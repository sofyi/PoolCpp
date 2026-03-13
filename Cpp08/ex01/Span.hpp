/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:19:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/13 05:53:32 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>

class Span
{
	private:
		unsigned N;
		std::list<long> ListInteger;
	public:
	//__________--OrthoDox--_________
	Span();
	~Span();
	Span(unsigned int N);
	Span (const Span &obj);
	Span & operator=(const Span obj);
	
	//____________--MemberFunction--_______
	void addNumber(long n) ;
	long shortestSpan();
	long longestSpan();
};