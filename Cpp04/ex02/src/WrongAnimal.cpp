/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:41:54 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/20 16:43:44 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal : Constructor Call" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : Destructor Call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal : copy constructor Call" << std::endl;
    this->type = obj.getType();
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal : Assignment Operator" << std::endl;
    this->type = obj.getType();
    return (*this);
}
 
//-------------------------ORTH---------------

 std::string WrongAnimal::getType()const
{
    std::cout << "GetType Function" << std::endl;
    return type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "Wrong Animal Sound ...." << std::endl;
}
