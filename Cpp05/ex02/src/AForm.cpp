/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:15:27 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:07:04 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

//------------OrthoDox-------

AForm::~AForm(){}

AForm::AForm():Name("DefForm"), Sin(false),PGrade(5), EGrade(2){}

AForm::AForm(const std::string name, int PGrade, int EGrade):Name(name), Sin(false), PGrade(PGrade), EGrade(EGrade)
{
    if ( PGrade > 150 || EGrade > 150)
        throw GradeTooLowException();
    if (PGrade < 1 || EGrade < 1)
        throw GradeTooHighException();
}

AForm::AForm (const AForm &obj):Name(obj.Name), Sin(obj.Sin), PGrade(obj.PGrade),EGrade(obj.EGrade){}

AForm & AForm::operator=(const AForm &obj)
{
    if (this != &obj)
        this->Sin = obj.Sin;
    return *this;
}

//-----------MemberFUnction-----------

std::ostream & operator<<(std::ostream &strem, const AForm &obj)
{
    strem << "Name Form : " << obj.GetName() << " Grade Permission : " << obj.GetPGrade()  << " Execut Grade : ";
    strem << obj .GetEGrade()<< " status of sain : " << std::boolalpha << obj.GetSin(); 
    return strem;
}

const char * AForm::GradeTooHighException:: what() const throw()
{
    return "Grade Too High For This Form";
}

const char * AForm::FormNotSin:: what() const throw()
{
    return "This Form Not Sin";
}

const char * AForm::GradeTooLowException:: what() const throw()
{
    return "Grade Too Low For this Form ";
}

bool    AForm::GetSin()const
{
    return Sin;   
}

const std::string   AForm::GetName()const
{
    return Name;
}

int AForm::GetEGrade()const
{
    return EGrade;
}

int AForm::GetPGrade()const
{
    return PGrade;
}

void    AForm::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > PGrade)
        throw AForm::GradeTooLowException();
    Sin = true;
}

void   AForm::execute(Bureaucrat const & executor) const
{
    if (Sin == false)
        throw FormNotSin();
    if (executor.getGrade() > EGrade)
        throw GradeTooLowException();
    ExecuteForm();
}
