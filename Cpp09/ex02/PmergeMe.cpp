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
void   PmergeMe::VectorRecursivePairSort(size_t gropSize)
{
    if (Vector.size() / gropSize < 2)
        return;
    for(size_t left = 0; left + (gropSize * 2) <= Vector.size();)
    {
        size_t rigth = left + gropSize;
        SwapBlocks(left, rigth, gropSize);
        left+= gropSize * 2;
        printVector();
        std::cout << "this is grop size" << gropSize <<std::endl;
    }
    VectorRecursivePairSort(gropSize *2);
    return;
}
void    PmergeMe::Sort()
{   
    VectorRecursivePairSort(1);

}