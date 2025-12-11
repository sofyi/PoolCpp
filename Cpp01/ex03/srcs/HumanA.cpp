/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:26:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/11 15:42:46 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &obj):name(str), objj(obj){};
void	HumanA::attack()
{
	if (name.empty())
		std::cout<< "Anonymos" << " attacks with their " << objj.getType();
	else
		std::cout<< name << " attacks with their " << objj.getType();
	std::cout << std::endl;
}
HumanA::~HumanA(){};