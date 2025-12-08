/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:37:04 by angel             #+#    #+#             */
/*   Updated: 2025/12/08 10:24:53 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    StringTabel[0] = "DEBUG";
    StringTabel[1] = "INFO";
    StringTabel[2] = "WARNING";
    StringTabel[3] = "ERROR";
}
void    Harl::info(void)
{
    std::cout<< "[INFO]"<<std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put nough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout<< std::endl;
}
void    Harl::debug(void)
{
    std::cout<< "[DEBEG]"<<std::endl;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout<< std::endl;
}
void    Harl::error(void)
{
    std::cout<< "[ERROR]"<<std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout<< std::endl;
}
void    Harl::warning(void)
{
    std::cout<< "[WARNING]"<<std::endl;
   std::cout <<  "I think I deserve to have some extra bacon for free. Ive been coming for years, whereas you started working here just last month.";
   std::cout<< std::endl;
}
void    Harl::compain(std::string level)
{
    int Index;
    
    Index = 0;
    while (Index < 4)
    {
        if (!level.compare(StringTabel[Index]))
           break;  
        Index++;
    }
    switch (Index)
    {
        
        case 0:
            debug();
             //fallthrough  
        case 1:
            info();
            //fallthrough  
        case 2:
            warning();
            //fallthrough
        case 3:
            error();
            break;
        default:
            std::cout<< "[ Probably complaining about insignificant problems ]";
            std::cout<<std::endl;
    }
}
Harl::~Harl(){}