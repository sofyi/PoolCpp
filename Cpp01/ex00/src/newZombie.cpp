/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:13:44 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/02 18:06:17 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *ZombieObj;
	
	ZombieObj = new(std::nothrow) Zombie(name);
	if (!ZombieObj)
		return NULL;
	return ZombieObj;
}
