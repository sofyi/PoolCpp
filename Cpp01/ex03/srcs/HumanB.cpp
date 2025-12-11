/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:26:01 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/11 17:16:10 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string Str)
{
    name = Str;
    PointWp = NULL;
}
void	HumanB::setWeapon(Weapon &Club)
{
    PointWp = &Club;
}
void HumanB::attack()
{
    std::string replasName;

    replasName = name;
    if (replasName.empty())
        replasName = "Anonymos";
    if (!PointWp)
        std::cout<< replasName << " ❌ no weapon ❌";
    else
      std::cout<< replasName << " attacks with their " << PointWp->getType();
    std::cout<< std::endl;
}
HumanB::~HumanB(){}
