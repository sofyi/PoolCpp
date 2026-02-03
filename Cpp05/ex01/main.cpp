/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:19:18 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/27 17:44:13 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./include/Form.hpp"
#include "./include/Bureaucrat.hpp"

int main()
{
    std::cout << "----Error Form-----" << std::endl;
    try
    {
        Form CollegForms("FORM", 170, 0);
        Bureaucrat Bero("Beero", 1);

        Bero.signForm(CollegForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }
    
    std::cout << "\n -----Correct Form Error Bero-----" << std::endl;
    try
    {
        Form CollegForms("FORM", 5, 1);
        Bureaucrat Bero("Beero", -10);

        Bero.signForm(CollegForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }

    std::cout <<"\n---Sign Form----------" << std::endl;
    try
    {
        Form CollegForms("FORM", 5, 1);
        Bureaucrat Bero("Beero", 5);

        Bero.signForm(CollegForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }
    
    std::cout << "\n-----Cant Sign Beero------" << std::endl;
    try
    {
        Form CollegForms("FORM", 5, 1);
        Bureaucrat Bero("Beero", 15);

        Bero.signForm(CollegForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }
    return 0;
}