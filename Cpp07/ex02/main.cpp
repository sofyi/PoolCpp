/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 21:52:33 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/27 12:44:08 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#define MAX_VAL 750

int main(int, char**)
{

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    Array<std::string> str(2);
    Array<double> DoubleeArray(3);

    std::cout << "--------** Arr of double **-------" << std::endl;
    DoubleeArray[0] = 55.555;
    DoubleeArray[1] = 1337.42;
    DoubleeArray[2] = 1337.4244;
    std::cout << DoubleeArray[0] << std::endl;
    std::cout << DoubleeArray[1] << std::endl;
    std::cout << DoubleeArray[2] << std::endl;
    std::cout << "size ->> " << DoubleeArray.size() << std::endl;
    std::cout << "--------** Arr of string **-------" << std::endl;
    str[0] = "hallo";
    str[1] = "42";
    std::cout << str[0] << std::endl;
    std::cout << str[1] << std::endl;
    std::cout <<  "string size -> " << str.size() << std::endl;
    
    std::cout << "------- const string ------" << std::endl;
    
    const Array<std::string> ConstStr(str);
    std::cout << ConstStr[0] << std::endl;
    std::cout << ConstStr[1] << std::endl;
    std::cout << "size ConstStrign--> " << ConstStr.size() << std::endl;
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << "--------** tst copy Constructor **-----" << std::endl;
        for(int i = 0; i < 5; i++)
        {
            std::cout << "tmpNumber- > " << tmp[i] << std::endl;
            std::cout << "testNumber-> " << test[i] << std::endl;
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}