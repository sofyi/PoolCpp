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

typedef struct sort
{
    int insert;
    int IndexPirs;
}s_t;

class PmergeMe
{
    private:
        std::vector<int> Vector;

        void    printVector();
        void    VectorRecursivePairSort(size_t gopSize);
        void    SwapBlocks(size_t left, size_t rigth, size_t gropSize);
        void InsertMinPend(std::vector<int> &main, std::vector<int> &pend, std::vector<size_t> &JcopNumber, size_t gropSiz);
        std::vector<int>::iterator BlockLowerBound(std::vector<int> &main, int value, size_t gropSiz);
    public:
    //------------------------OrthoDox---------------------§§
    
    

    //------------------------MeMberFunction----------------
        void    AddNumbers(char **av, int ac);
        int     GetInput(char **av, int ac);
        void    Sort();
        void    BuildMainAndPend(size_t gropSize);
};