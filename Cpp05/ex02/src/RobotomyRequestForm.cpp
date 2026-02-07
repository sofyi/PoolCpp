/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 08:45:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:08:45 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRepuestForm",72,45)
{
    Target = "DefRobotomy";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target): AForm("RobotomyForm",72,45)
{
    this->Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm("RobotomyForm",72,45)
{
    this->Target = obj.Target; 
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
        this->Target = obj.Target;
    return *this; 
}

void RobotomyRequestForm::ExecuteForm()const
{
    unsigned int    random;

    random = std::rand();
    std::cout << "* drilling noises *" << std::endl;
    if (random % 100 >= 50)
    {
        std::cout << "robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "robotomy failed" << std::endl;
    }
}