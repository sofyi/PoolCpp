/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:35:29 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:36:17 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<< "ScavTrap: Default constractor called" << std::endl;
    Name = "Anonymous";
    Hitpoints = 100;
    Energypoints = 50;
    Attackdamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "ScavTrap "<< Name << ": Destractour called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &Name): ClapTrap(Name)
{
    std::cout<< "ScavTrap " << Name << ": constractor with name called" << std::endl;
    Hitpoints = 100;
    Energypoints = 50;
    Attackdamage = 20;
}

//_______________________________Function_______________________

void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap " << Name << ": is now in Gate keeper mode."<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Energypoints > 0 && Hitpoints > 0)
    {
        std::cout << "ScavTrap " << Name << ": attacks "<< target;
        std::cout << " with " << Attackdamage << " points of damage !" << std::endl;
        Energypoints--;
    }
    else if (Energypoints <= 0 && Hitpoints <= 0)
        std::cout<< "ScavTrap "<< Name << ": can't attack (no energy and no hit points)" << std::endl;
    else if (Energypoints <= 0)
        std::cout<< "ScavTrap "<< Name << ": can't attack (no energy)" << std::endl;
    else if (Hitpoints <= 0)
        std::cout<< "ScavTrap "<< Name << ": can't attack (no hit points)" << std::endl;
}
