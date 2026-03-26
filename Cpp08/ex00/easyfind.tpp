/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:24:09 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/24 19:41:33 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &Array, int Serch)
{
	
 	typename T::iterator i = std::find(Array.begin(),Array.end(), Serch );
	if (i == Array.end())
		throw std::invalid_argument("Element Not Found In This Container");
	return i;
}