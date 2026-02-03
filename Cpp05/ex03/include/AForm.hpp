/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:15:17 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/01 15:54:41 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
    private:
    
    const std::string   Name;
    bool                Sin;
    const int           PGrade;
    const int           EGrade;
    
    public:
        AForm();
        virtual~AForm();
        AForm (const AForm &obj);
        AForm & operator=(const AForm &obj);
        AForm(const std::string name, int PGrade, int EGrade);
        
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
       
        class  FormNotSin: public std::exception
        {
            public:
                const char *what()const throw();
        };
        //-----------MemberFunction------------

        bool                GetSin()const;
        const std::string   GetName()const;
        int                 GetEGrade()const;
        int                 GetPGrade()const;
        void                beSigned(const Bureaucrat &obj);
        void                execute(Bureaucrat const & executor) const;
        virtual void        ExecuteForm()const = 0;
};

std::ostream& operator<<(std::ostream &strem, const AForm &obj);

#endif
