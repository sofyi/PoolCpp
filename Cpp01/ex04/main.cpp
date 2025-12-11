/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:44:56 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/10 18:29:12 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniSed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cout << "---Bad Input----"<<std::endl, 1);
    MiniSed obj(av[1], av[2], av[3]);
    if(!obj.MyMiniSed())
        return (1);
}
