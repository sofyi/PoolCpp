/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/26 03:22:36 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <algorithm>

template <typename T>
void print(T p)
{
    std::cout << p << std::endl;
}

int main()
{
    MutantStack<int> mstack;
    MutantStack<int> m;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size -> " << mstack.size() << " top elemnt -> " << mstack.top() << std::endl;
    
    std::cout << "--------~~~~~__print all stack__~~~~~---------------"<< std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    m = mstack;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    *it = 12;
    std::for_each(it, ite,print<int>);
    std::cout << "--------~~~~~__print const stack__~~~~~---------------" << std::endl;
    const MutantStack<int> ConstMstack(mstack);
    MutantStack<int>::const_iterator ConstItB = ConstMstack.begin();
    MutantStack<int>::const_iterator ConstItE = ConstMstack.end();
    std::for_each(ConstItB, ConstItE, print<int>); 
}