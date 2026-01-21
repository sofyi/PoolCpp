/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:27:04 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 16:51:06 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/Dog.hpp"

//-------------------------ORTH---------------------

Dog::Dog()
{
    int i;
    std::cout << "Dog : Constructor Call" << std::endl;

    i = 0;
    type = "Dog";
    BrainDog = new Brain();
    while (i < 100)
        BrainDog->SetIdeas(i++, "This is DogBrain");
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor Call" << std::endl;
    delete BrainDog;
    BrainDog = NULL;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "Dog  : Copy Constructor Call" << std::endl;
    this->BrainDog = new Brain();
    *this->BrainDog = *obj.BrainDog;
}

Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog : Assignment Operator " << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        *this->BrainDog = *obj.BrainDog;
    }
    return (*this);
}

//------------------------------Function---------------------------------------

void Dog::makeSound()const
{
    std::cout << "Dog sound : hhhhooowww" << std::endl;
}
void Dog::PrintBrean(unsigned int index) const
{
    std::cout<< BrainDog->GetIdeas(index) << std::endl;
}

void Dog::SeatBrainDog(unsigned int index, std::string New)
{
    BrainDog->SetIdeas(index, New);
}