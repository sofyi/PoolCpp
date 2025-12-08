/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:41:46 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/07 17:37:41 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *p;

	p = newZombie("InHeap");
	if (!p)
		return (std::cout<< "error allocation"<< std::endl, 1);
	p->announce();
	randomChump("InStack");
	delete(p);
}