/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 22:21:14 by slamhaou          #+#    #+#             */
/*   Updated: 2026/04/12 11:02:21 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//------------------------OrthoDox---------------------§§
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(){}   
PmergeMe::PmergeMe(PmergeMe const &obj)
{
    *this = obj;
}
PmergeMe& PmergeMe::operator=(PmergeMe const &obj)
{
    if (this != &obj)
    {
        Deque = obj.Deque;
        Vector = obj.Vector;
    }
    return *this;
}

//------------------------MeMberFunction----------------


void    PmergeMe::AddNumbers(char **av, int size)
{
    long Number;
    std::stringstream streem;
    
    for(int i = 1; i < size; i++)
        for(size_t j = 0; av[i][j]; j++)
            if (!(isdigit(av[i][j])) && !(av[i][j] == '+' && isdigit(av[i][j + 1])) && !isspace(av[i][j]))
                throw std::out_of_range("Error: Bad Input");
    for (int i = 1; i < size; i++)
        streem << av[i] << " ";
    while (true)
    {
        streem >> Number;
        if ((streem.fail() && !streem.eof()) || (Number > std::numeric_limits<int>::max()))
            throw std::out_of_range("Error: out of range");
        if (streem.fail())
            break;
        Vector.push_back(Number);
        Deque.push_back(Number);
    }
}

int     PmergeMe::GetInput(char **av, int ac)
{
    try
    {
        AddNumbers(av, ac);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
    return 0;
}

void PmergeMe::printVector(double exactTime, char type)
{
    for (size_t i = 0; i < Vector.size(); i++)
        std::cout << Vector[i] << " ";
    std::cout << std::endl;
    if (type == 't')
    {
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << Vector.size() << " elements with std::vector : " << exactTime << " us" << std::endl;
    }
}

//__________________________---Vector---__________________

void PmergeMe::SwapBlocksVector(size_t left, size_t rigth, size_t gropSize)
{
    if(Vector[left + gropSize -1] > Vector[rigth + gropSize - 1])
    {
        for(size_t i = 0; i < gropSize; i++ )
        {
            std::swap(Vector[left + i], Vector[rigth + i]);
        }
    }
}

std::vector<int>::iterator PmergeMe::VecBlockLowerBound(std::vector<int> &main, int value, size_t gropSiz)
{
    size_t left = 0;
    size_t right = main.size() / gropSiz;

    while (left < right)
    {
        size_t mid = left + (right - left) / 2;
        
        size_t lastIndex = (mid + 1) * gropSiz - 1;
        
        if (main[lastIndex] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return main.begin() + (left * gropSiz);
}

std::vector<size_t> GetJacopstallNumber(size_t gropSize, size_t PendSiz)
{
    size_t max;
    std::vector<size_t> JcopNumber;

    JcopNumber.push_back(0);
    JcopNumber.push_back(1);
    JcopNumber.push_back(3);
    max = (PendSiz / gropSize);
    if (max == 0)
        max = 1;
    while (JcopNumber[JcopNumber.size() - 1] <= max)
        JcopNumber.push_back(JcopNumber[JcopNumber.size() - 1] + (2 * (JcopNumber[JcopNumber.size() - 2])));
    return JcopNumber;
}

void PmergeMe::InsertMinPend(std::vector<int> &main, std::vector<int> &pend, std::vector<size_t> &JcopNumber, size_t gropSiz)
{
    size_t FirstJcop;
    size_t SecondJcop;
    int BlockStart = 0;
    int Blockend = 0;
    size_t AlonBloks;
    size_t totalBlocks;
    size_t HiBblocks;
    std::vector<int>::iterator ItBound;

    size_t i = 2;
    FirstJcop = 1;
    totalBlocks = pend.size() / gropSiz;
    HiBblocks = totalBlocks + 1;
    while (FirstJcop < HiBblocks && i < JcopNumber.size())
    {
        SecondJcop = JcopNumber[i];
        if (SecondJcop > HiBblocks)
            SecondJcop = HiBblocks;

        for (size_t j = SecondJcop; j > FirstJcop; j--)
        {
            BlockStart =  (j - 2) * gropSiz;
            Blockend = BlockStart + gropSiz;
            ItBound = VecBlockLowerBound(main,pend[Blockend - 1], gropSiz);
            main.insert(ItBound, pend.begin() + BlockStart, pend.begin() + Blockend);
        }
        FirstJcop = SecondJcop;
        i++;
    }
    AlonBloks = pend.size() % gropSiz;
    if (AlonBloks > 0)
    {
        size_t leftStart = totalBlocks * gropSiz;
         main.insert(main.end(), pend.begin() + leftStart, pend.end());
    }
    return;
}

void    PmergeMe::VectorBuildMainAndPend(size_t gropSize)
{
    std::vector<int> main;
    std::vector<int> pend;

    size_t i = 0;
    while (i < gropSize * 2)
    {
        main.push_back(Vector[i]);
        i++;
    }
    while (i + (gropSize * 2) <= Vector.size())
    {
        size_t count = 0;
        while (count < gropSize)
        {
            pend.push_back(Vector[i++]);
            count++;
        }
        count = 0;
        while (count < gropSize)
        {
            main.push_back(Vector[i++]);
            count++;
        }
    }
    while (i < Vector.size())
        pend.push_back(Vector[i++]);
    std::vector<size_t> jaco = GetJacopstallNumber(gropSize, pend.size());
    InsertMinPend(main, pend, jaco, gropSize);
    Vector = main;
    main.clear();
    return;
}

void   PmergeMe::VectorRecursivePairSort(size_t gropSize)
{
    if (Vector.size() / gropSize < 2)
        return;
    for(size_t left = 0; left + (gropSize * 2) <= Vector.size();)
    {
        size_t rigth = left + gropSize;
        SwapBlocksVector(left, rigth, gropSize);
        left+= gropSize * 2;
    }
    VectorRecursivePairSort(gropSize *2);

    // ===== UNWINDING =====
    VectorBuildMainAndPend(gropSize);
    return;
}

//----------------------------Deque-------------------------

void PmergeMe::SwapBlocksDeq(size_t left, size_t rigth, size_t gropSize)
{
    if(Deque[left + gropSize -1] > Deque[rigth + gropSize - 1])
    {
        for(size_t i = 0; i < gropSize; i++ )
        {
            std::swap(Deque[left + i], Deque[rigth + i]);
        }
    }
}

std::deque<int>::iterator PmergeMe::DequeBlockLowerBound(std::deque<int> &main, int value, size_t gropSiz)
{
    size_t left = 0;
    size_t right = main.size() / gropSiz;

    while (left < right)
    {
        size_t mid = left + (right - left) / 2;
        
        size_t lastIndex = (mid + 1) * gropSiz - 1;
        
        if (main[lastIndex] < value)
            left = mid + 1;
        else
            right = mid;
    }

    return main.begin() + (left * gropSiz);
}

std::deque<size_t> DequeGetJacopstallNumber(size_t gropSize, size_t PendSiz)
{
    size_t max;
    std::deque<size_t> JcopNumber;

    JcopNumber.push_back(0);
    JcopNumber.push_back(1);
    JcopNumber.push_back(3);
    max = (PendSiz / gropSize);
    if (max == 0)
        max = 1;
    while (JcopNumber[JcopNumber.size() - 1] <= max)
        JcopNumber.push_back(JcopNumber[JcopNumber.size() - 1] + (2 * (JcopNumber[JcopNumber.size() - 2])));
    return JcopNumber;
}

void PmergeMe::DequeInsertMinPend(std::deque<int> &main, std::deque<int> &pend, std::deque<size_t> &JcopNumber, size_t gropSiz)
{
    size_t FirstJcop;
    size_t SecondJcop;
    int BlockStart = 0;
    int Blockend = 0;
    size_t AlonBloks;
    size_t totalBlocks;
    size_t HiBblocks;
    std::deque<int>::iterator ItBound;

    size_t i = 2;
    FirstJcop = 1;
    totalBlocks = pend.size() / gropSiz;
    HiBblocks = totalBlocks + 1;
    while (FirstJcop < HiBblocks && i < JcopNumber.size())
    {
        SecondJcop = JcopNumber[i];
        if (SecondJcop > HiBblocks)
            SecondJcop = HiBblocks;

        for (size_t j = SecondJcop; j > FirstJcop; j--)
        {
            BlockStart =  (j - 2) * gropSiz;
            Blockend = BlockStart + gropSiz;
            ItBound = DequeBlockLowerBound(main,pend[Blockend - 1], gropSiz);
            main.insert(ItBound, pend.begin() + BlockStart, pend.begin() + Blockend);
        }
        FirstJcop = SecondJcop;
        i++;
    }
    AlonBloks = pend.size() % gropSiz;
    if (AlonBloks > 0)
    {
        size_t leftStart = totalBlocks * gropSiz;
         main.insert(main.end(), pend.begin() + leftStart, pend.end());
    }
    return;
}

void    PmergeMe::DequeBuildMainAndPend(size_t gropSize)
{
    std::deque<int> main;
    std::deque<int> pend;

    size_t i = 0;
    while (i < gropSize * 2)
    {
        main.push_back(Deque[i]);
        i++;
    }
    while (i + (gropSize * 2) <= Deque.size())
    {
        size_t count = 0;
        while (count < gropSize)
        {
            pend.push_back(Deque[i++]);
            count++;
        }
        count = 0;
        while (count < gropSize)
        {
            main.push_back(Deque[i++]);
            count++;
        }
    }
    while (i < Deque.size())
        pend.push_back(Deque[i++]);
    std::deque<size_t> jaco = DequeGetJacopstallNumber(gropSize, pend.size());
    DequeInsertMinPend(main, pend, jaco, gropSize);
    Deque = main;
    main.clear();
    return;
}

void   PmergeMe::DequeRecursivePairSort(size_t gropSize)
{
    if (Deque.size() / gropSize < 2)
        return;
    for(size_t left = 0; left + (gropSize * 2) <= Deque.size();)
    {
        size_t rigth = left + gropSize;
        SwapBlocksDeq(left, rigth, gropSize);
        left+= gropSize * 2;
    }
    DequeRecursivePairSort(gropSize *2);

    // ===== UNWINDING =====
    DequeBuildMainAndPend(gropSize);
    return;
}

void    PmergeMe::Sort()
{
    double exactTime = 0;
    std::clock_t VectorStart = 0;
    std::clock_t VectorEnd = 0;
    std::clock_t DeqStart = 0;
    std::clock_t DeqEnd = 0;

    if (Vector.size() == 0)
    {
        std::cerr << "you must give a list of numbers to sort" << std::endl;
        return;
    }
    
    std::cout << "Before: ";
    printVector(exactTime,'n');

    //vector
    VectorStart = std::clock();
    if (!std::is_sorted(Vector.begin(), Vector.end()))
        VectorRecursivePairSort(1);
    VectorEnd = std::clock();

    //deque
    DeqStart = std::clock();
    if (!std::is_sorted(Deque.begin(), Deque.end()))
        DequeRecursivePairSort(1);
    DeqEnd = std::clock();

    //time
    std::cout << "After: ";
    exactTime = static_cast<double>(VectorEnd - VectorStart) / CLOCKS_PER_SEC * 1000000;
    printVector(exactTime,'t');
    exactTime = static_cast<double>(DeqEnd - DeqStart) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << Deque.size() << " elements with std::deque : " << exactTime << " us" << std::endl;
}