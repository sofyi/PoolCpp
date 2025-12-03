/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:46:18 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/03 11:32:53 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie::Zombie(std::string Name): name(Name){}
Zombie::Zombie(){}
Zombie::~Zombie()
{
	std::cout<< name << " :This Zombie Ddestroyed"<< std::endl;
}
void Zombie::announce( void )
{
	std::cout<< name << " :" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::SetName(std::string Name)
{
	name = Name;
}
