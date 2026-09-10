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

void    PmergeMe::AddNumbers(char **av, int size)
{
    long Number;
    size_t len;
    std::vector<int> tmV;
    std::string str;
    std::stringstream streem;
    std::stringstream streemchak;
    
    len = 0;
    for(int i = 1; i < size; i++)
    {
        for(size_t j = 0; av[i][j]; j++)
        {
            if (!(isdigit(av[i][j])) && !(av[i][j] == '+' && isdigit(av[i][j + 1])) && !isspace(av[i][j]))
                throw std::out_of_range("Bad Input");
            len++;
        }
    }
    str.reserve(len);
    for (int i = 1; i < size; i++)
    {
        str += av[i];
        str.push_back(' ');
    }
    streem << str;
    while (true)
    {
        streem >> Number;
        if ((streem.fail() && !streem.eof()) || (Number > std::numeric_limits<int>::max()))
            throw std::out_of_range("oout");
        if (streem.fail())
            break;
        Vector.push_back(Number);
    }
      tmV = Vector;
    std::sort(tmV.begin(), tmV.end());
    for(size_t i = 0; i < tmV.size() - 1; i++)
        if (tmV[i] == tmV[i+1])
            throw std::out_of_range("double NUmbersss");
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

void PmergeMe::printVector()
{
    for (size_t i = 0; i < Vector.size(); i++)
        std::cout << Vector[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::SwapBlocks(size_t left, size_t rigth, size_t gropSize)
{
    if(Vector[left + gropSize -1] > Vector[rigth + gropSize - 1])
    {
        for(size_t i = 0; i < gropSize; i++ )
        {
            std::swap(Vector[left + i], Vector[rigth + i]);
        }
    }
}

//     max = PendSiz / gropSize;
//     if (max == 0)
//         max = 1;
//    while ( JcopNumber[JcopNumber.size() - 1] < max)
//         JcopNumber.push_back( JcopNumber[JcopNumber.size() - 1] + (2 * (JcopNumber[JcopNumber.size() - 2])));
//     return JcopNumber;
// }
std::vector<int>::iterator PmergeMe::BlockLowerBound(std::vector<int> &main, int value, size_t gropSiz)
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
   if (main.begin() + (left * gropSiz) != main.end())
    std::cout << value << " grop size " << gropSiz << " pos "  << *(main.begin() + (left * gropSiz))<< std::endl;

    return main.begin() + (left * gropSiz);
}
std::vector<size_t> GetJacopstallNumber(size_t gropSize, size_t PendSiz)
{
    size_t max;
    std::vector<size_t> JcopNumber;

    JcopNumber.push_back(0);
    JcopNumber.push_back(1);
    JcopNumber.push_back(3);
    max = (PendSiz / gropSize); // تعديل الحد الأقصى لتغطية آخر بلوك
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
            ItBound = BlockLowerBound(main,pend[Blockend - 1], gropSiz);
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
void    PmergeMe::BuildMainAndPend(size_t gropSize)
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
    std::__1::vector<size_t> jaco = GetJacopstallNumber(gropSize, pend.size());
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
        SwapBlocks(left, rigth, gropSize);
        left+= gropSize * 2;
    }
    VectorRecursivePairSort(gropSize *2);

    // ===== UNWINDING =====
    BuildMainAndPend(gropSize);
    return;
}
void    PmergeMe::Sort()
{   
   if(!std::is_sorted(Vector.begin(), Vector.end()))
        VectorRecursivePairSort(1);
    printVector();
}