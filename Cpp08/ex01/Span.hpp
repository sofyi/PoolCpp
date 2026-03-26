/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:19:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/26 01:27:18 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <limits> 
#include <algorithm>
class Span
{
	private:
		unsigned int N;
		std::vector<int> VArr;
	public:
	//__________--OrthoDox--_________
	Span();
	~Span();
	Span(unsigned int N);
	Span (const Span &obj);
	Span& operator=(const Span &obj);
	
	//____________inerClass______________

	class ErrorSpan : public std::exception
	{
		public:
			const char* what() const throw();
	};
	//____________--MemberFunction--_______
	
	void addNumber(int n) ;
	long shortestSpan()const;
	long longestSpan()const;
	template <typename T>
	void SmartAdd(const T& ItBegin,  const T& ItEnd)
	{
		if (VArr.size() + std::distance(ItBegin, ItEnd) > N || ItBegin == ItEnd )
			throw ErrorSpan(); 	
		VArr.insert(VArr.begin(), ItBegin, ItEnd);
	}
};