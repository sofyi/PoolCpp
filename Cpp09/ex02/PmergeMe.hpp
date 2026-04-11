/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:34:48 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/11 19:23:53 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
class PmergeMe
{
    private:
        std::vector<int> VectorPars;
    public:
    //------------------------OrthoDox---------------------
    
    

    //------------------------MeMberFunction----------------
        void    AddNumbers(char **av, int ac);
        int     MeargInsetion(char **av, int ac);
};