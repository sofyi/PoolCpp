/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:24:09 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/05 12:40:24 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
size_t easyfind(T &Array, int Serch)
{
	
 typename T::iterator i = find(Array.begin(),Array.end(), Serch ) ;
	if (i != Array.end())
		return std::distance(Array.begin(), i);
	return -1;
}