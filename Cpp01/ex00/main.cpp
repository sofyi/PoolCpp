/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:41:46 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 13:21:18 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *PointNewZombie;

	PointNewZombie = newZombie("InHeap");
	PointNewZombie->announce();
	randomChump("InStack");
	if (!PointNewZombie)
		return (std::cout<< "error allocation"<< std::endl, 1);
	delete(PointNewZombie);
}