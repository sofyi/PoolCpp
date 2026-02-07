/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 21:45:43 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 10:57:35 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

//--------------OrthoDox---------------

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(): Name("DefName"), Grade(150){}

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

void Bureaucrat::signForm(Form &FormObj) const
{
    try
    {
        FormObj.beSigned(*this);
        std::cout << "bureaucrat "<< this->Name <<  ": signed " << FormObj.GetName() << std::endl;
    }
    catch(const std::exception& bero)
    {
        std::cout << this->Name << " : couldnt sign " << FormObj.GetName() << " because " << bero.what()<< std::endl; 
    }
    
}