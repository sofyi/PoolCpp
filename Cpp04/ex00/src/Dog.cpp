/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:27:04 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 13:03:37 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/Dog.hpp"

//-------------ORTHODOX--CANONICAL-------------------

Dog::Dog()
{
    std::cout << "Dog : Constructor Call" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor Call" << std::endl;
}

Dog::Dog(const Dog &obj):Animal(obj)
{
    std::cout << "Dog : Copy Constructor Call" << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog : Assignment Operator" << std::endl;
    if (this != &obj)
        this->Animal::operator=(obj);
    return (*this);
}

//---------------------------FUNCTIO------------------------------------------

void Dog::makeSound()const
{
    std::cout << "Dog sound : hhhhooowww" << std::endl;
}
