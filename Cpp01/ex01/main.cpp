/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:11:31 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 17:10:05 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	size_t	i;
	Zombie *Arr;
	
	i = 0;
	Arr = zombieHorde(4,"GroupsZopiee");
	if (!Arr)
		return (1);
	while (i <= 3)
		Arr[i++].announce();
	delete[] Arr;
}