/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:17:40 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/26 03:18:45 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "Span.hpp"

int main()
{

std::cout << "----------------- Tst 1 Fast Add --------------  "<< std::endl;
	try
	{
		Span Span1(4);
		std::list<int> Lista;
	
		Lista.push_back(13);
		Lista.push_back(2147483647);
		Lista.push_back(-2147483640);
		Lista.push_back(-2147483648);

		Span1.SmartAdd(Lista.begin(), Lista.end());
		
		std::cout << Span1.longestSpan() << std::endl;
		std::cout << Span1.shortestSpan() << std::endl;
		const Span o(Span1);
		std::cout << "const tst -> " << o.shortestSpan() << std::endl;
		
	}
	catch(Span::ErrorSpan &e)
	{
		std::cout << e.what()  << std::endl;
	}

	
std::cout << "----------------- Tst  2--------------" << std::endl; 
	
	Span Span3(10000);
	try
	{
		for(int i = 0; i < 10000;i++)
			Span3.addNumber((rand() % 500));
		std::cout << Span3.longestSpan() << std::endl;
	}
	catch(const Span::ErrorSpan & e)
	{
		std::cout << e.what() << std::endl;
	}
	
std::cout << "----------------- Tst  Error --------------" << std::endl; 

		try
		{
			Span tst1 = Span(1);
		}
		catch( Span::ErrorSpan &e)
		{
			std::cout << e.what()  << std::endl;
		}
		
		try
		{
			Span tst2 = Span(3);
			tst2.addNumber(1);
			tst2.longestSpan();
		}
		catch( Span::ErrorSpan &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			Span sp = Span(3);
			
				sp.addNumber(1);
				sp.addNumber(2);
				sp.addNumber(3);
				sp.addNumber(4);
				sp.addNumber(5);
		}
		catch( Span::ErrorSpan &e)
		{
			std::cout << e.what() << std::endl;
		}
	
	return 0;
}
