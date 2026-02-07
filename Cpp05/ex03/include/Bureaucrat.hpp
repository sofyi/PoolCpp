/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:40:00 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:18:58 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat
{
   private:
    const std::string Name;
    int                Grade;
   public:
   //--------------OrthoDox--------
   
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat(std::string Name, int grad);
    Bureaucrat& operator=(const Bureaucrat &obj);
    
    //------------InnerClass---------------------
    
    class GradeTooHighException :public std::exception 
    {
        public:
            const char * what() const throw();
    };
    
    class GradeTooLowException :public std::exception
    {
        public:
            const char * what() const throw();
    };
    
    //--------------MemBerFunction----------
    
    int         getGrade() const;
    std::string getName() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &FormObj)const;
    void executeForm(AForm const & form) const;  
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &obj);
#endif