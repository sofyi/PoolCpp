/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:25:00 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/20 16:40:39 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includ/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrongcat : Constructor Call"<< std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "Wrongcat Destructor Call" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj)
{
    std::cout << "WrongCat : Copy Constructor call" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat : Assignment Operator Call" << std::endl;
    this->type = obj.getType();
    return (*this);
} 
//----------------------ORTHO------------------------------

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound : mmeeewwwww " << std::endl;
}
