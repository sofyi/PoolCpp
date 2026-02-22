/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:11:39 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/22 06:34:59 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    double a = 42.0;
    std::cout << a << std::endl;
    if (ac != 2)
    {
        std::cout << "Not Valid Input" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
}