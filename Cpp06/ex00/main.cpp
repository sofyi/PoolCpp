/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:11:39 by slamhaou          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/02/23 14:04:01 by slamhaou         ###   ########.fr       */
=======
/*   Updated: 2026/02/22 06:34:59 by slamhaou         ###   ########.fr       */
>>>>>>> a5ccaa09b932a9a21def5d44f2e054170a73560d
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Not Valid Input" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
}