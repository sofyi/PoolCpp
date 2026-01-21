/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:43:35 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 15:54:35 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includ/Brain.hpp"

Brain::Brain()
{
    int i;

    i = 0;
    std::cout << "Brain : Constructor Call " << std::endl;
    while (i < 100)
        ideas[i++] = "Hi This is brain";
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor Call"<< std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain : Copy Constructor Call" << std::endl;
   *this = obj;
}

Brain& Brain::operator=(const Brain &obj)
{
    int i;

    i = 0;
    std::cout << "Brain : Assignment Operator Call"<< std::endl;
    if (this != &obj)
    { 
        while (i < 100)
        {
            this->ideas[i] = obj.ideas[i];
            i++;
        }
    }
    return(*this);
}
//------------------------FUNCTION----------------

std::string Brain::GetIdeas(unsigned int index)const
{   
    if (index <= 100)
      return ideas[index];
    return ("error");
}

void    Brain::SetIdeas(unsigned int index, std::string NewIdea)
{
    if (index <= 100)
        ideas[index] = NewIdea;   
}
