/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:42:07 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/14 14:40:38 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
Serializer:: Serializer(){}
Serializer:: ~Serializer(){}
Serializer:: Serializer(const Serializer &obj)
{
    (void)obj;
}

Serializer& Serializer::operator=(const Serializer &obj)
{
    (void)obj;
    return *this;
}

//----------------MEMBER FUNCTION----------------

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t> (ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}