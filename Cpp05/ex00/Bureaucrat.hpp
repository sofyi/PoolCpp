/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:40:00 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/26 13:41:27 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
   private:
    const std::string Name;
    int                Grade;//from 1 tooooo 150
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
    void incrementGrade();//grad bytzad y3ni 2 --> 1
    void decrementGrade();//grad n9as y3ny 2 --> 3
   
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &obj);
#endif