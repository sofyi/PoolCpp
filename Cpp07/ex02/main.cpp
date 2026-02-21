/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:05:31 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/19 16:37:22 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
int main()
{
    Array<int> StudentId;
    Array<std::string> StudentName; 

    StudentId[0] = 12;
    StudentName[0] = "safia";

    std::cout << StudentId[0] << std::endl;
    std::cout << StudentName[0] << std::endl;

}