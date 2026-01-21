/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:20:52 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 11:50:28 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Constructor Call"<< std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor Call" << std::endl;
}

Cat::Cat(const Cat &obj):Animal(obj)
{
    std::cout << "Cat : Copy Constructor Call" << std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
    std::cout << "Cat : Assignment Operator Call" << std::endl;
    if (this != &obj)
        this->Animal::operator=(obj);
    return (*this);
} 
//----------------------ORTHO------------------------------

void Cat::makeSound() const
{
    std::cout << "Cat sound : mmeeewwwww " << std::endl;
}
