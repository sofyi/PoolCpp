/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:47:31 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 17:05:22 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie::Zombie(std::string name): name(name){}
Zombie::~Zombie()
{
	std::cout<< name << " :This Zombie Ddestroyed"<< std::endl;
}
void Zombie::announce( void )
{
	std::cout<< name << " :" << "BraiiiiiiinnnzzzZ..." << std::endl;
}