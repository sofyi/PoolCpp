/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:23:18 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/01 16:01:00 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm",25, 5), Target("DefPardon"){}

PresidentialPardonForm::PresidentialPardonForm(std::string Targ):AForm("PresidentialPardonForm",25, 5), Target(Targ){}

PresidentialPardonForm:: PresidentialPardonForm(const PresidentialPardonForm &obj):AForm(obj), Target(obj.Target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
        Target = obj.Target;
    return *this;
}

void PresidentialPardonForm::ExecuteForm()const
{
    std::cout << Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
