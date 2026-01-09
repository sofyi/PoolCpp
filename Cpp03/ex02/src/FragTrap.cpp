/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:08:33 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:49:59 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"FragTrap Default Constructor called for [Anonymous]" << std::endl;
    Hitpoints = 100;
    Energypoints = 100;
    Attackdamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap " << Name << ": Destructor called"<< std::endl;
}
FragTrap::FragTrap(const std::string &Name):ClapTrap(Name)
{
    std::cout <<"FragTrap " << Name <<": Constructor with name called" << std::endl;
    Hitpoints = 100;
    Energypoints = 100;
    Attackdamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name <<": Hey guys! That was awesome! High five? ✋"<< std::endl;
}
