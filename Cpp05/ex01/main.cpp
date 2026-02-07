/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:19:18 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/07 11:01:33 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./include/Form.hpp"
#include "./include/Bureaucrat.hpp"

int main()
{
    std::cout << "----Error Form-----" << std::endl;
    try
    {
        Form LeetForms("FORM", 170, 0);
        Bureaucrat Bero("Beero", 1);

        Bero.signForm(LeetForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }
    
    std::cout << "\n -----Correct Form Error Bero-----" << std::endl;
    try
    {
        Form LeetForms("FORM", 5, 1);
        Bureaucrat Bero("Beero", -10);

        Bero.signForm(LeetForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }

    std::cout <<"\n---Sign Form----------" << std::endl;

        Form LeetForms("FORM", 5, 1);
        Bureaucrat Bero("Beero", 5);

        Bero.signForm(LeetForms);
    
    std::cout << "\n-----Cant Sign Beero------" << std::endl;
    try
    {
        Form LeetForms("FORM", 5, 1);
        Bureaucrat Bero("Beero", 15);

        Bero.signForm(LeetForms);
    }
    catch(std::exception &expt)
    {
        std::cout << expt.what() << std::endl;
    }
    return 0;
}