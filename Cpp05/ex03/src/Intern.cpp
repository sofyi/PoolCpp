/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:55:54 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 10:33:07 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
Intern::Intern()
{
    std::cout << "coco";
    TabNameForms[0] = "ShrubberyCreationForm";
    TabNameForms[1] = "RobotomyRequestForm";
    TabNameForms[2] = "PresidentialPardonForm";
}
Intern::~Intern(){}
Intern::Intern(const Intern &obj)
{
    TabNameForms[0] = obj.TabNameForms[0];
    TabNameForms[1] = obj.TabNameForms[1];
    TabNameForms[2] = obj.TabNameForms[2];
}
Intern &Intern::operator=(const Intern &obj)
{
    (void) obj;
    return *this;
}
//---------------------------------------

AForm*    Intern::makeForm(std::string Form, std::string Target)
{
    int index;
    ShrubberyCreationForm *Shruby;
    index = 0;
    while (index < 3)
    {
        if (!Form.compare(TabNameForms[index]))
            break;
        index++;
    }
    switch (index)
    {
        case 0:
            try
            {
                Shruby = new(std::nothrow) ShrubberyCreationForm(Target);
                std::cout << "Intern creates " << Form << std::endl;
                return Shruby;
            }
            catch(const std::exception& e)
            {
                std::cout << e.what() << std::endl;
                return NULL;
            }
            
        case 1:
            std::cout << "Intern creates " << Form << std::endl;
            return new(std::nothrow)  RobotomyRequestForm(Target);
        case 2:
            std::cout << "Intern creates " << Form << std::endl;
            return new(std::nothrow)  PresidentialPardonForm(Target);
        default:
            std::cout << "Msg From Intern This Form unavailable" << std::endl;
            return NULL;
    }
}