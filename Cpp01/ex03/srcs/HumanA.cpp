/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:26:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:26:19 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &obj):name(str), objj(obj){};
void	HumanA::attack()
{
	std::cout<< name << " attacks with their " << objj.getType() << std::endl;
}
HumanA::~HumanA(){};