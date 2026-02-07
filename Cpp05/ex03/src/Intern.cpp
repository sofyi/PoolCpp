/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:55:54 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:21:42 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::~Intern(){}
Intern::Intern()
{
    TabNameForms[0] = "shrubbery creation";
    TabNameForms[1] = "robotomy request";
    TabNameForms[2] = "presidential pardon";
}

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
            std::cout << "Intern creates " << Form << std::endl;
            return new(std::nothrow) ShrubberyCreationForm(Target);
        case 1:
            std::cout << "Intern creates " << Form << std::endl;
            return new(std::nothrow)  RobotomyRequestForm(Target);
        case 2:
            std::cout << "Intern creates " << Form << std::endl;
            return new(std::nothrow)  PresidentialPardonForm(Target);
        default:
            std::cout << "Intern: This form is unavailable" << std::endl;
            return NULL;
    }
}
