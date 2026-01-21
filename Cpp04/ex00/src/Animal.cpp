/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:40:53 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 15:08:43 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/Animal.hpp"

//-----------------ORTHODOX--CANONICAL------------------

Animal::Animal()
{
    std::cout << "Animal : Constructor Call" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal : Destructor Call" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal : Copy Constructor Call" << std::endl;
    this->type = obj.type;
}

Animal& Animal::operator=(const Animal &obj)
{
    std::cout << "Animal : Operator Assignment" << std::endl;
    if (this != &obj)
      this->type = obj.type;
    return (*this);
}

//-------------------------Function---------------

std::string Animal::getType()const
{
    return type;
}

void Animal::makeSound()const
{
    std::cout << "This Is Sound Of Animal" << std::endl;
}
