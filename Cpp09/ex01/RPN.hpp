/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 11:41:28 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/09 11:38:02 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
class RPN
{
  private:
    std::stack<int> IntStack;
    int res;
   void  operation(char operat);
    public:
    RPN();
    // ~RNP();
    // RNP(const RNP& obj);
    // RNP& operator=(const RNP& obj);
    int calculate(std::string Math);
  
};