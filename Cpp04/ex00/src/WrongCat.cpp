/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:25:00 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 13:17:28 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includ/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrongcat : Constructors Call"<< std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructors Call" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj):WrongAnimal(obj)
{
    std::cout << "WrongCat : copy Constructors Call" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat : Assignment Operator Call" << std::endl;
    if (this != &obj)
        this->WrongAnimal::operator=(obj);
    return (*this);
} 
//----------------------ORTHO------------------------------

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound : mmeeewwwww" << std::endl;
}
