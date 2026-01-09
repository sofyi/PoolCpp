/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:25:49 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:35:35 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./includ/ClapTrap.hpp"
#include "./includ/ScavTrap.hpp"

int main()
{
    ClapTrap obj1("Attacker Robot");
    ScavTrap objGard("Guardian Robot");
    
    std::cout << "...............Creat All Obj............"<<std::endl;
    std::cout << "__________________________________________"<<std::endl;
    
    objGard.guardGate();
    obj1.attack("Guardian Robot");
    objGard.takeDamage(0);
    objGard.attack("Attacker Robot");
    obj1.takeDamage(20);
    obj1.attack("Guardian Robot");
    obj1.beRepaired(15);
    objGard.guardGate();
}