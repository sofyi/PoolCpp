/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:41:54 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 14:59:42 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal : Constructors Call" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal : Destructors Call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "Wrong Animal : Copy Constructors Call" << std::endl;
    this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "Wrong Animal : Assignment Operator" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}
//-------------------------ORTH---------------

 std::string WrongAnimal::getType()const
{
    return type;
}

void WrongAnimal::makeSound()const
{
    std::cout << "wrong Animal sound ...." << std::endl;
}
