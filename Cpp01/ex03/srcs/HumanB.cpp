/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:26:01 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/10 13:43:41 by slamhaou         ###   ########.fr       */
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
    if (!PointWp)
        std::cout<< name << " attacks with their " << std::endl;
    else
      std::cout<< name << " attacks with their " << PointWp->getType()<< std::endl;
}
HumanB::~HumanB(){}
