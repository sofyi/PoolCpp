/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:59:49 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/07 18:01:15 by angel            ###   ########.fr       */
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