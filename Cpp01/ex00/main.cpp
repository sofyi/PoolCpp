/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:41:46 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 17:03:15 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *PointNewZombie;

	PointNewZombie = newZombie("InHeap");
	if (!PointNewZombie)
		return (std::cout<< "error allocation"<< std::endl, 1);
	PointNewZombie->announce();
	randomChump("InStack");
	delete(PointNewZombie);
}