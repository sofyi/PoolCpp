/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:18:45 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/24 14:11:48 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

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
        std::cout << "invalid Class" << std::endl;
}

void identify(Base& p)
{
    try
    {    
       A a = dynamic_cast<A&>(p);
        std::cout << "this is A class" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {}
    try
    {
       B  b =  dynamic_cast<B&>(p);
        std::cout << "this is B class" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {}
    try
    {
      C c =  dynamic_cast<C&>(p);
        std::cout << "this is C class" << std::endl; 
        return;
    }
    catch(const std::exception& e)
    {}
    std::cout << "bad_cast" << std::endl;
}