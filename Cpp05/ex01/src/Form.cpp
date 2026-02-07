/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:15:27 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:00:25 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

//------------OrthoDox-------

Form::~Form(){}

Form::Form():Name("DefName"), Sin(false),PGrade(5), EGrade(2){}

Form::Form(const std::string name, int PGrade, int EGrade):Name(name), Sin(false), PGrade(PGrade), EGrade(EGrade)
{
    if ( PGrade > 150 || EGrade > 150)
        throw GradeTooLowException();
    if (PGrade < 1 || EGrade < 1)
        throw GradeTooHighException();
}

Form::Form (const Form &obj):Name(obj.Name), Sin(obj.Sin), PGrade(obj.PGrade),EGrade(obj.EGrade){}

Form & Form::operator=(const Form &obj)
{
    if (this != &obj)
        this->Sin = obj.Sin;
    return *this;
}

//-----------MemberFUnction-----------

std::ostream & operator<<(std::ostream &strem, const Form &obj)
{
    strem << "Name Form : " << obj.GetName() << " Grade Permission : " << obj.GetPGrade()  << " Execut Grade : ";
    strem << obj .GetEGrade()<< " status of sain : " << std::boolalpha << obj.GetSin(); 
    return strem;
}

const char * Form::GradeTooHighException:: what() const throw()
{
    return "Grade Too High for this Form";
}

const char * Form::GradeTooLowException:: what() const throw()
{
    return "Grade Too Low For this Form ";
}

bool    Form::GetSin()const
{
    return Sin;   
}

const std::string   Form::GetName()const
{
    return Name;
}

int Form::GetEGrade()const
{
    return EGrade;
}

int Form::GetPGrade()const
{
    return PGrade;
}

void    Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > PGrade)
        throw Form::GradeTooLowException();
    Sin = true;
}
