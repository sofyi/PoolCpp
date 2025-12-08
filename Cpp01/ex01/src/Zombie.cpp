/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:46:18 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/07 18:03:21 by angel            ###   ########.fr       */
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
