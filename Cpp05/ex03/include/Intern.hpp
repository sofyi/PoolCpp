/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:51:42 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/03 11:42:09 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
#define Intern_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
        std::string TabNameForms[3];
    public:
        Intern();
        ~Intern();
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        //---------------------------------------
        
        AForm*    makeForm(std::string Form, std::string Target);
};

#endif
