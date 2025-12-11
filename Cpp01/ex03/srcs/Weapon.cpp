/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:48:45 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/11 17:27:49 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string str)
{
    type = str;
}
void    Weapon::setType(std::string str)
{
    if (str.empty())
        type = "empy type 🎀";
    else
      type = str;
}
const std::string& Weapon::getType(void)
{
    return  type;
}
Weapon::~Weapon(){}
