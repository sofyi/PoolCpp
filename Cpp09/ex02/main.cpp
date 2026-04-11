/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 09:27:20 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/10 22:36:00 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe Sort;
    
    if (ac < 2)
        return std::cout << "Error: give a list of numbers to sort "<< std::endl, 1;
    if (Sort.MeargInsetion(av, ac))
        return 1;
}