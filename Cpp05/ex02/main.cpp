/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:19:18 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/01 16:14:26 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./include/AForm.hpp"
#include "./include/Bureaucrat.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/RobotomyRequestForm.hpp"

int main()
{   
    //--------Forms------------
    
    RobotomyRequestForm     RobotomyForm("Robotomy");
    PresidentialPardonForm  PardonForm("Pardon");
    ShrubberyCreationForm  ShrubberyForm("Shrubbery");
    //---------Bero----------------------
    Bureaucrat  Abod("Abod", 1);
    Bureaucrat  zember("zember", 150);

    std::cout << "\n_____Status Form____" << std::endl;
    
    std::cout << PardonForm << std::endl;
    std::cout << RobotomyForm << std::endl;
    std::cout << ShrubberyForm << std::endl;
    
    std::cout << "\n_____High Grade____" << std::endl;
    try
    {
        Bureaucrat cooc ("coco", 111111);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "\n_____Low Grade____" << std::endl;
    try
    {
        Bureaucrat cooc ("coco", -5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
   
    std::cout << "\n_____ExecuteFormEror____" << std::endl;
    try
    {
        Bureaucrat coco("coco", 20);
        coco.signForm(PardonForm);
        coco.executeForm(PardonForm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "\n_____SinException____" << std::endl;
    
    Abod.executeForm(RobotomyForm);
    
    std::cout << "\n_____Valid Form____" << std::endl;
    
    Abod.signForm(PardonForm);
    Abod.executeForm(PardonForm);
    Abod.signForm(RobotomyForm);
    Abod.executeForm(RobotomyForm);
    Abod.signForm(ShrubberyForm);
    Abod.executeForm(ShrubberyForm);
    std::cout << "\n_____Status Form____" << std::endl;
    
    std::cout << PardonForm << std::endl;
    std::cout << RobotomyForm << std::endl;
    std::cout << ShrubberyForm << std::endl;

}