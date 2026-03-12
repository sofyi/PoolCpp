/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:24:09 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/12 02:41:18 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
long easyfind(T &Array, int Serch)
{
	
 	typename T::iterator i = find(Array.begin(),Array.end(), Serch );
	if (i == Array.end())
		return -1;
	return std::distance(Array.begin(), i);
}