/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:20:52 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 21:11:36 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/Cat.hpp"


Cat::Cat()
{
    int i;

    i = 0;
    std::cout << "Cat : Constructor Call"<< std::endl;
    type = "Cat";
    CatBrain = new Brain();
    while (i < 100)
    {
        CatBrain->SetIdeas(i, "This is Cat Brain");
        i++;   
    }
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor Call" << std::endl;
    delete CatBrain;
    CatBrain = NULL;
}

Cat::Cat(const Cat &obj):Animal(obj)
{
    std::cout << "Cat : Copy Constructor Call" << std::endl;
    CatBrain = new Brain();
    *this->CatBrain = *obj.CatBrain;
}

Cat& Cat::operator=(const Cat &obj)
{   
    std::cout << "Cat : Assignment Operator Call" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        *this->CatBrain = *obj.CatBrain;
    }
    return (*this);
}

//----------------------ORTHO------------------------------

// void Cat::makeSound() const
// {
//     std::cout << "Cat sound : mmeeewwwww" << std::endl;
// }

void Cat::PrintBrean(unsigned int index) const
{
       std::cout<< CatBrain->GetIdeas(index) << std::endl; 
}

void Cat::SeatBrainCat(unsigned int index, std::string New)
{
        CatBrain->SetIdeas(index, New);
}
