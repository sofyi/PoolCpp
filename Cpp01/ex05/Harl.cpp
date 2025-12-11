/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:07:42 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/11 17:45:32 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    StringTabel[0] = "DEBUG";
    StringTabel[1] = "INFO";
    StringTabel[2] = "WARNING";
    StringTabel[3] = "ERROR";
    point[0] = &Harl::debug;
    point[1] = &Harl::info;
    point[2] = &Harl::warning;
    point[3] = &Harl::error;
}
void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout<< " nough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout<< std::endl;
}
void    Harl::debug(void)
{
    std::cout<< "I love having extra bacon for my";
    std::cout<<" 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout<< std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak";
    std::cout<< " to the manager now.";
    std::cout<< std::endl;
}

void    Harl::warning(void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free.";
    std::cout<<" Ive been coming for years, whereas you started working here just last month.";
    std::cout<< std::endl;
}

void    Harl::complain(std::string level)
{
    int Index;
    
    Index = 0;
    while (Index < 4)
    {
        if (!level.compare(StringTabel[Index]))
        {
           (this->*point[Index])();
            return ;
        }
        Index++;
    }
    std::cout<< "Use One Option -> {DEBUG, INFO, ERROR, WARNING}";
    std::cout<<std::endl;
}

Harl::~Harl(){}
