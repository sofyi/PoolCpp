/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:19:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/17 20:06:06 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
class Span
{
	private:
		unsigned N;
		std::vector<long> VArr;
	public:
	//__________--OrthoDox--_________
	Span();
	~Span();
	Span(unsigned int N);
	Span (const Span &obj);
	Span & operator=(const Span obj);
	
	//____________inerClass______________

	class ErrorSpan : public std::exception
	{
		public:
			const char* what() const throw();
	};
	//____________--MemberFunction--_______
	void addNumber(long n) ;
	long shortestSpan();
	long longestSpan();
	template <typename T>
	void SmartAdd(T ItBegin,  T ItEnd)//ftakre al error bta3 & m3 al refurance
	{
		if (std::distance(ItBegin, ItEnd) > N)
			throw ErrorSpan(); 	
		VArr.insert(VArr.begin(), ItBegin, ItEnd);
	}
};