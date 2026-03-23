/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:34:23 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/23 01:43:13 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include<deque>
#include <iostream>
int main()
{

    std::deque<int> I;

    I.push_back(1);
    I.push_back(2);
    I.push_back(3);
    I.push_back(4);
    I.push_back(5);
    
    
   typename std::deque<int>::reverse_iterator it = I.rbegin();
  
   it++;
   std::cout << *it << std::endl;
}