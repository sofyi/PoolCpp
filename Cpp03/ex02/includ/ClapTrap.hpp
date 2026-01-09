/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:26:48 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/08 11:28:45 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        int Hitpoints;
        int Energypoints;
        int Attackdamage;
        std::string Name;
    public:
        ClapTrap();
        ~ClapTrap(void);
        ClapTrap(const std::string &Name);
        ClapTrap(ClapTrap const &obj);
        ClapTrap& operator=(ClapTrap const &obj);
     void takeDamage(unsigned int amount);
     void beRepaired(unsigned int amount);
     void attack(const std::string& target);
};

#endif