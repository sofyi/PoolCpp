/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:44:33 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/16 18:17:53 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename Ttyp>
void    iter(Ttyp *arr, const int length, void(*f)(Ttyp &))
{
    int index;

    index = 0;
    while (index < length)
        f(arr[index++]);
}
#endif