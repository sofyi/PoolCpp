/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:44:36 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/16 18:12:38 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename TT>

void printItem(TT &Item)
{
    std::cout << Item << std::endl;
}

void StringSaize(const std::string &itm)
{
    std::cout << "size of elemnt -> " << itm.size() << std::endl;
}

int main()
{
    const std::string   Sarr[] = {"safia", "1337" ,"Leet", "42"};
    std::string   NonConstarr[] = {"coco", "42"};
    int                 Iarr[]= {1, 5, 3};
    double              Darr[] = {1.55, 2.5, 5.5};

    std::cout << "-----**arr of int**------- " << std::endl;
    iter(Iarr, 3, printItem);
    
    std::cout << "------**arr of double**-------- " << std::endl;
    iter(Darr, 3, printItem);
    std::cout << "-----**arr of const string**------ " << std::endl;
    iter(Sarr, 4, printItem);
    
    std::cout << "--**arr of string**--- " << std::endl;
    iter(NonConstarr, 2, printItem);
    std::cout << "------**Function with parameter of const**------" << std::endl;
    iter(Sarr, 4, StringSaize);
}