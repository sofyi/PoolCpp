/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:27:57 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/22 17:27:37 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string Name;
};

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &obj);
        Serializer& operator=(const Serializer &obj);
    public:
        static uintptr_t serialize(Data* ptr);   
        static Data* deserialize(uintptr_t raw); 
};

#endif