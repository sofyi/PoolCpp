/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:11:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/15 11:23:43 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main()
{
    Base * Bas1 =  generate();
    Base * base2 =  generate();
    Base * base3 =  generate();
    
    std::cout << "---- with pointer ----" << std::endl;
    identify(Bas1);
    identify(base2);
    identify(base3);
    std::cout << "\n---- with reference ----" << std::endl;
    identify(*Bas1);
    identify(*base2);
    identify(*base3);
    
}
