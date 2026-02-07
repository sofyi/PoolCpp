/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:15:17 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 10:56:59 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
    
    const std::string   Name;
    bool                Sin;
    const int           PGrade;
    const int           EGrade;
    
    public:
        Form();
        ~Form();
        Form (const Form &obj);
        Form & operator=(const Form &obj);
        Form(const std::string name, int PGrade, int EGrade);
        //-------------InnerClass--------------
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what()const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what()const throw();
        };
        
        //-----------MemberFunction------------
        
        bool                GetSin()const;
        const std::string   GetName()const;
        int           GetEGrade()const;
        int           GetPGrade()const;
        void                beSigned(const Bureaucrat &obj);
};

std::ostream& operator<<(std::ostream &strem, const Form &obj);

#endif
