/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:19:18 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/26 12:49:56 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    const Bureaucrat obj;
    
    try
    {
        Bureaucrat ob("New Bureacrat", 0);
    }
    catch(const std::exception &bero)
    {
        std::cout << bero.what() << std::endl;
    }
    
    try
    {
        Bureaucrat ob("New bureaucrat", 155);
    }
    catch(const std::exception& bero)
    {
        std::cout << bero.what() << std::endl;
    }

    try
    {
        Bureaucrat ob("New bureaucrat", 1);
        ob.incrementGrade();
    }
    catch(const std::exception& bero)
    {
        std::cout << bero.what() << std::endl;
    }
    
    std::cout << obj << std::endl;
}