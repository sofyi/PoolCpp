/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 21:45:43 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/03 13:06:24 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

//--------------OrthoDox---------------

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(): Name("DefBereaucrat"), Grade(150){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        Grade = obj.Grade;
    return *this;
}

Bureaucrat::Bureaucrat(std::string Name, int grade): Name(Name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : Name(obj.Name), Grade(obj.Grade){}

//----------------------------------


const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat Grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat Grade Too Low";
}

std::string Bureaucrat::getName() const
{
    return Name;
}
int Bureaucrat::getGrade() const
{
    return Grade;
}
void Bureaucrat::incrementGrade()
{
    if (Grade == 1)
        throw GradeTooHighException();
    Grade--;
    
}

void Bureaucrat::decrementGrade()
{
 
    if (Grade == 150)
        throw GradeTooLowException();
    Grade++;
}

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &obj)
{
    stream << obj.getName() << " bureaucrat grade " << obj.getGrade();
    return stream;
}

void Bureaucrat::signForm(AForm &FormObj) const
{
    try
    {
        FormObj.beSigned(*this);
        std::cout << Name << ": signed" << FormObj.GetName();
    }
    catch(const std::exception& bero)
    {
        std::cout << Name << " : couldnt sign " << FormObj.GetName() << " because " << bero.what()<< std::endl; 
    }  
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
    }
    catch(std::exception &exec)
    {
        std::cout << exec.what() << std::endl;
    }
}