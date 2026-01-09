/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 12:47:25 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:02:02 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj1("Attacker Robot1");
    ClapTrap obj2("Attacker Robot2");
    ClapTrap ob(obj1);
    
    ob = obj2;
    std::cout << ".........Make all Obj......."<< std::endl;
    std::cout <<"____________________________________"<< std::endl;
    obj1.attack("Attacker Robot2");
    obj2.takeDamage(0);
    obj2.attack("Attacker Robot1");
    obj1.takeDamage(0);
    obj1.attack("Attacker Robot2");
    obj1.beRepaired(12);
    ob.beRepaired(5);
}