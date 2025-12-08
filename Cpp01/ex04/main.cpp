/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:33:29 by angel             #+#    #+#             */
/*   Updated: 2025/12/08 15:19:29 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniSad.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cout << "Bad input"<<std::endl, 1);
    MiniSed obj(av[1], av[2], av[3]);
    obj.MyMiniSed();
}