/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 12:47:25 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:53:43 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includ/ScavTrap.hpp"
#include "./includ/FragTrap.hpp"

int main()
{

    ScavTrap ScavObj("Guardian Robot");
    FragTrap FragObj("FragAttacker Robot");
    ClapTrap ClapObj("ClapAttacker Robot");

    std::cout << "----------------Creat All Obj---------------" << std::endl;
    std::cout << "_______________---------------______________" << std::endl;
    
    ScavObj.guardGate();
    ClapObj.attack("Guardian Robot");
    ScavObj.takeDamage(0);
    FragObj.attack("Guardian Robot");
    ScavObj.takeDamage(30);
    ScavObj.takeDamage(30);
    ScavObj.takeDamage(30);
    ScavObj.takeDamage(30);
    ScavObj.attack("FragAttacker Robot");
    ScavObj.attack("ClapAttacker Robot");
    ScavObj.beRepaired(100);
    FragObj.highFivesGuys();

}
