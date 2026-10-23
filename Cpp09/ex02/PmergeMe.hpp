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
#include <ctime>
#include <iomanip>

class PmergeMe
{
    private:
        std::vector<int> Vector;
        std::deque<int> Deque;

        //deque
        void    DequeBuildMainAndPend(size_t gropSize);
        void    DequeRecursivePairSort(size_t gropSize);
        void    SwapBlocksDeq(size_t left, size_t rigth, size_t gropSize);
        void    DequeInsertMinPend(std::deque<int> &main, std::deque<int> &pend, std::deque<size_t> &JcopNumber, size_t gropSiz);
        std::deque<int>::iterator   DequeBlockLowerBound(std::deque<int> &main, int value, size_t gropSiz);
        //Vector
        void    printVector(double exactTime, char type);
        void    VectorRecursivePairSort(size_t gopSize);
        void    SwapBlocksVector(size_t left, size_t rigth, size_t gropSize);
        void    InsertMinPend(std::vector<int> &main, std::vector<int> &pend, std::vector<size_t> &JcopNumber, size_t gropSiz);
        std::vector<int>::iterator VecBlockLowerBound(std::vector<int> &main, int value, size_t gropSiz);
        void    VectorBuildMainAndPend(size_t gropSize);

        //paars
        void    AddNumbers(char **av, int ac);
    public:
    //------------------------OrthoDox---------------------§§

        PmergeMe();
        ~PmergeMe();
        PmergeMe(PmergeMe const &obj);
        PmergeMe &operator=(PmergeMe const &obj);
    //------------------------MeMberFunction----------------§§

        void    Sort();
        int     GetInput(char **av, int ac);
};