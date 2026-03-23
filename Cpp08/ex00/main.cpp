/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:55:05 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/23 18:09:23 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
//____________________________--Vector--____________________________
	
	std::vector<int> IntVector;
	std::vector<int>::iterator Vit;
	
	IntVector.push_back(5);
	IntVector.push_back(15);
	IntVector.push_back(-5);

	try
	{
		Vit = easyfind(IntVector, -5);
		std::cout << "Vector find = "  << *Vit << std::endl;
		IntVector.erase(Vit);
		std::cout << "Vector find = " << *(easyfind(IntVector, -5)) << std::endl;
	}
	catch(std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}


//____________________________--Deque--____________________________

	std::deque<int> IntDeque;
	std::deque<int>::iterator Dit;

	
	IntDeque.push_back(1);
	IntDeque.push_back(2);
	IntDeque.push_front(3);
	IntDeque.push_front(4);
	try
	{
		Dit = easyfind(IntDeque , 3);
		std::cout << "Deque find = "<< *Dit << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
//____________________________--Linked List--____________________________

	std::list<unsigned int> IntList;
	std::list<unsigned int>::iterator Lit;
	
	IntList.push_back(1);
	IntList.push_back(21);
	IntList.push_back(22);
	try
	{
		Lit = easyfind(IntList, 22);
		std::cout << "List find = " << *Lit << std::endl;
		IntList.erase(Lit);
		std::cout << "List find = " <<  *(easyfind(IntList, 22)) << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cerr << e.what() << '\n';
	}
}