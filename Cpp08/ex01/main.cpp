/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:17:40 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/23 18:37:31 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

int main()
{
	Span sp = Span(5);
		
	std::cout << "---------------- Tst 1 ---------------" << std::endl; 
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
//________________Smart ADD______________________
std::cout << "----------------- Tst  2--------------" << std::endl; 

	Span Span2(3);
	std::list<unsigned int> Lista;
			
		Lista.push_back(1);
		Lista.push_back(2);
		Lista.push_back(10);

		Span2.SmartAdd(Lista.begin(), Lista.end());
		std::cout << Span2.longestSpan() << std::endl;


//_______________________--TstError--_____________________
	std::cout << "----------------- Tst  Error --------------" << std::endl; 
	{
		try
		{
			Span tst = Span(1);
			tst.longestSpan();
		}
		catch( Span::ErrorSpan &e)
		{
			std::cout << e.what()  << std::endl;
		}
		
	}
	
	{
		try
		{
			Span tst = Span(0);
			tst.addNumber(1);
		}
		catch( Span::ErrorSpan &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		try
		{
			Span tst = Span(3);
			
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
	}
	
	return 0;
}