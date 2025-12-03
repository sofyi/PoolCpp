/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:47:31 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/03 10:23:59 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie::Zombie(std::string name): Name(name){}
Zombie::Zombie(){}
Zombie::~Zombie()
{
	std::cout<< Name << " :This Zombie Ddestroyed"<< std::endl;
}
void Zombie::announce( void )
{
	std::cout<< Name << " :" << "BraiiiiiiinnnzzzZ..." << std::endl;
}