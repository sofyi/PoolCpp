/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:58 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/20 03:07:20 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    
    std::cout << "--------~~~~~__print all stack__~~~~~---------------"<< std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    *it = 12;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "--------~~~~~__print const stack__~~~~~---------------" << std::endl;
    const MutantStack<int> ConstMstack(mstack);
    MutantStack<int>::const_iterator ConstItB = ConstMstack.begin();
    MutantStack<int>::const_iterator ConstIte = ConstMstack.end();

    while (ConstItB != ConstIte)
    {
        std::cout << *ConstItB << std::endl;
        ++ConstItB;
    }
    
    return 0;
}