/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:19:18 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/03 15:34:40 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./include/AForm.hpp"
#include "./include/Bureaucrat.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/Intern.hpp"

int main()
{  
    std:: cout << "------ valid case -------" << std::endl; 
    {
        Bureaucrat ob("coco", 1);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            try
            {
                ob.signForm(*rrf);
                ob.executeForm(*rrf);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
        delete rrf;
    }
    std:: cout << "\n------ unvalid case -------" << std::endl;
    {
        Bureaucrat ob("coco", 1);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("unValid", "Bender");
        if (rrf)
        {
            try
            {
                rrf->execute(ob);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
        delete rrf;
    }
    
}