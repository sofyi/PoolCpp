/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:49:43 by angel             #+#    #+#             */
/*   Updated: 2025/12/05 15:31:01 by angel            ###   ########.fr       */
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
    std::cout<< name << " attacks with their " << PointWp->getType()<< std::endl;
}
HumanB::~HumanB(){}
