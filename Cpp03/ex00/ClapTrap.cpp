/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:35:42 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:03:47 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    Hitpoints = 10;
    Attackdamage = 0;
    Energypoints = 10;
    Name = "Anonymous";
}

ClapTrap::ClapTrap(const std::string &Name)
{
    std::cout << "ClapTrap " << Name << " Constructor with name called" << std::endl;
    Hitpoints = 10;
    Attackdamage = 0;// al 9owa ele bdrob byha had al clapp cam?
    Energypoints = 10;
    this->Name = Name;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << Name <<" : is destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
       
    this->Hitpoints = obj.Hitpoints;
    this->Energypoints = obj.Energypoints;
    this->Attackdamage = obj.Attackdamage;
    this->Name = obj.Name;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Assignment operator called" << std::endl;
    this->Hitpoints = obj.Hitpoints;
    this->Energypoints = obj.Energypoints;
    this->Attackdamage =obj.Attackdamage;
    this->Name = obj.Name;
    return (*this);
}

//_____________________---Function---_____________________________

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hitpoints > 0)
    {
        Hitpoints -= amount;
        std::cout << "ClapTrap " << Name << " : takes " << amount << " points of damage "<< std::endl;
    }
    else
        std::cout<< "ClapTrap " << Name <<  " : now has " << Hitpoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energypoints > 0 && Hitpoints > 0)
    {
        std::cout<< "ClapTrap " << Name << " : repairs itself for "<< amount << " hit points" << std::endl;
        Hitpoints += amount;
        Energypoints--;
    }
    if (Energypoints < 0 && Hitpoints < 0)
         std::cout << "ClapTrap" << Name << " : cant be repaired (no energy or no hit points) "<< std::endl;
    else if (Energypoints < 0)
        std::cout << "ClapTrap" << Name << " : cant be repaired (no energy) "<< std::endl;
    else if (Hitpoints < 0)
        std::cout << "ClapTrap" << Name << " : cant be repaired (no hit points) "<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hitpoints > 0 && Energypoints > 0)
    {
        std::cout <<"ClapTrap "<< Name << " :attacks " << target << " causing " << Attackdamage << " points of damage!" <<std::endl;
        Energypoints--;
    }
    else if (Energypoints < 0 && Hitpoints < 0)
        std::cout<< "ClapTrap "<< Name << "can't attack (no energy and no hit points)" << std::endl;
    else if (Energypoints < 0)
        std::cout<< "ClapTrap "<< Name << "can't attack (no energy)" << std::endl;
    else if (Hitpoints < 0)
        std::cout<< "ClapTrap "<< Name << "can't attack ( no hit points)" << std::endl;
}
