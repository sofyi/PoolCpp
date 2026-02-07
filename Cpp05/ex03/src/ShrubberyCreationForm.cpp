/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:54:32 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:22:41 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    Target = "DefTarget";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target): AForm("ShrubberyForm",145, 137)
{
    this->Target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):AForm(obj)
{
    Target = obj.Target;
}

ShrubberyCreationForm &ShrubberyCreationForm ::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        Target = obj.Target;
    }
    return (*this);
}

//----------------------------------------------------

const char *ShrubberyCreationForm::ErorStreamFile::what()const throw()
{
    return "Erorr Stream";
}

void   ShrubberyCreationForm::ExecuteForm()const
{
    std::string FileName;
  
    FileName = Target+"_shrubbery";
    std::ofstream out(FileName.c_str());
    if (!out.is_open())
        throw ErorStreamFile();
    out << "    * " << std::endl;
    out << "   *** " << std::endl;
    out << "  ***** " << std::endl;
    out << " ******* " << std::endl;
    out << "    |    " << std::endl;
}