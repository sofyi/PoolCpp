/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:18:45 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/15 15:38:23 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base * generate(void)
{
    int Random;
    
    Random = rand() % 3;
    if (Random == 0)
        return new A;
    else if (Random == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "this is A class" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "this is B class" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "this is B class" << std::endl;
    else 
        std::cout << "tttttt sadik mafi hada nafarat" << std::endl;
}

void identify(Base& p)
{
    try
    {    
        dynamic_cast<A&>(p);
        std::cout << "this is A class" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {}
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "this is B class" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {}
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "this is C class" << std::endl; 
        return;
    }
    catch(const std::exception& e)
    {}
    std::cout << "ttttt bad cast" << std::endl;
}