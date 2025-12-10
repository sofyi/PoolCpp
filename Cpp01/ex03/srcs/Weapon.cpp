/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:48:45 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:48:48 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string str)
{
    type = str;
}
void    Weapon::setType(std::string str)
{
    type = str;    
}
const std::string& Weapon::getType(void)
{
    return  type;
}
Weapon::~Weapon(){}