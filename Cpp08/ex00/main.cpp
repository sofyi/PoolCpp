/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:55:05 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/12 18:04:06 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
//____________________________--Vector--____________________________
	
	std::vector<int> IntVector;
	
	
	IntVector.push_back(5);
	IntVector.push_back(15);
	IntVector.push_back(-5);
	
	std::cout << "Vector = {5, 15, -5}" << " Search eleament : -5  plase: " << easyfind(IntVector, -5) << std::endl;
	IntVector.erase(IntVector.end() - 1);
	std::cout << "Vector = {5, 15, -5}" << " Search eleament : -5  plase: " << easyfind(IntVector, -5) << std::endl;

//____________________________--Deque--____________________________

//deque capasyty beta3o int -> 4 / 512 gcc compil
	std::deque<int> IntDeque;
	
	IntDeque.push_back(1);
	IntDeque.push_back(2);
	IntDeque.push_front(3);
	IntDeque.push_front(4);
	std::cout << "Deque = {4, 3, 1, 2}" << " Search eleament : 3  plase: " << easyfind(IntDeque, 3) << std::endl;
//____________________________--Linked List--____________________________

	std::list<unsigned int> IntList;
	
	IntList.push_back(1);
	IntList.push_back(21);
	IntList.push_back(22);
	std::cout << "List = {1, 21, 22}" << " Search eleament : 22  plase: " << easyfind(IntList, 22) << std::endl;
	
}