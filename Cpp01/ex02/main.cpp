/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:27:25 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:27:29 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string String = "HI THIS IS BRAIN";
    std::string *stringPTR = &String;
    std::string &stringREF = String;
    
    std::cout<< &String   <<std::endl;
    std::cout<< stringPTR <<std::endl;
    std::cout<< &stringREF<<std::endl;
    std::cout<< String     <<std::endl;
    std::cout<< *stringPTR <<std::endl;
    std::cout<< stringREF  <<std::endl;
}