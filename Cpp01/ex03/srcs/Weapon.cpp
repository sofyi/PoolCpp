/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:30:05 by angel             #+#    #+#             */
/*   Updated: 2025/12/05 10:53:52 by slamhaou         ###   ########.fr       */
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