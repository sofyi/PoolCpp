/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:47:13 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/15 16:53:08 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename Typ>

void swap(Typ &a, Typ &b)
{
    Typ tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

template <typename Typ>
Typ min(Typ a, Typ b)
{
    if (a < b)
        return a;
    return b;
}

template <typename Typ>
Typ max(Typ a, Typ b)
{
    if (a > b)
        return a;
    return b;
}

#endif