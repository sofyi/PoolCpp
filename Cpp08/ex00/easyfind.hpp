/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:55:01 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/24 19:41:56 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ESYFIND_HPP
#define ESYFIND_HPP


#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &Array, int Num);

#include "easyfind.tpp"
#endif