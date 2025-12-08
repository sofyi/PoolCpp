/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:59:41 by angel             #+#    #+#             */
/*   Updated: 2025/12/07 18:14:21 by angel            ###   ########.fr       */
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