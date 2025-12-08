/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:54:56 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/07 18:26:42 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &obj):name(str), objj(obj){};
void	HumanA::attack()
{
	std::cout<< name << " attacks with their " << objj.getType() << std::endl;
}
HumanA::~HumanA(){};