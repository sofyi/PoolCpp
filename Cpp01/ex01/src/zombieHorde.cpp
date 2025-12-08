/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:28:00 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:28:03 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

Zombie* zombieHorde(int N, std::string Name)
{
	int	i;
	
	Zombie *Arr = new(std::nothrow) Zombie[N];
	if (!Arr)
		return NULL;
	i = 0;
	while (i < N)
		Arr[i++].SetName(Name);
	return Arr;
}