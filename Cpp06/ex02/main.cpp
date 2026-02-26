/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:11:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/24 14:08:49 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main()
{
    srand(time(NULL));
    Base * Base1 =  generate();
    Base * Base2 =  generate();
    Base * Base3 =  generate();

    std::cout << "---- with pointer ----" << std::endl;
    identify(Base1);
    identify(Base2);
    identify(Base3);
    
    std::cout << "\n---- with reference ----" << std::endl;
    identify(*Base1);
    identify(*Base2);
    identify(*Base3);
    
    delete Base1;
    delete Base2;
    delete Base3;
}
