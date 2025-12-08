/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:27:52 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:27:55 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

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
