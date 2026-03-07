/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:55:05 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/05 12:40:56 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
int main()
{
	std::vector<int> IntVector;

	IntVector.push_back(5);
	IntVector.push_back(15);
	IntVector.push_back(-5);
	IntVector.push_back(20);
	IntVector.push_back(25);
	std::cout << easyfind(IntVector, -53) << std::endl;
}