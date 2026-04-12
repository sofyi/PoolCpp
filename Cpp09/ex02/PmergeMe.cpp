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
        VectorPars.push_back(Number);
    }
      tmV = VectorPars;
    std::sort(tmV.begin(), tmV.end());
    for(size_t i = 0; i < tmV.size() - 1; i++)
        if (tmV[i] == tmV[i+1])
            throw std::out_of_range("double NUmbersss");
}

int     PmergeMe::MeargInsetion(char **av, int ac)
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