/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/18 23:33:31 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


//const test
int main()
{
    MutantStack<int> mstack;
    mstack.push(42);
    mstack.push(21);

   // const MutantStack<int> cstack = mstack;

    //MutantStack<int>::iterator it = cstack.begin();


    // std::cout << "Elements in const stack: " << std::endl;
    // while (it != ite)
    // {
        
    //     std::cout << *it << std::endl;
        
    //     ++it;
    // }

    return 0;
}
