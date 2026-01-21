/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:53:02 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 13:03:54 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog: public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog& operator=(const Dog &obj);
    //--------Function-----------
        void makeSound()const;
};

#endif