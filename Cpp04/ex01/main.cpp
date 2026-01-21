/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:30:53 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 17:24:39 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includ/Cat.hpp"
#include "./includ/Dog.hpp"
#include "./includ/WrongCat.hpp"

int main()
{
    int     index;
    
    Cat Newcat;
    std::cout <<" ------------------------------------------- " << std::endl;
    Cat OtheCat;
    std::cout <<" ------------------------------------------- " << std::endl;
    const Animal* i = new Cat();
    std::cout <<" ------------------------------------------- " << std::endl;
    const Animal* j = new Dog();
    Animal *Housegarden[100];
    std::cout <<" -----------------ArrBrain-------------------------- " << std::endl;
    index = 0;
    while (index < 50)
        Housegarden[index++] = new Cat();
    while (index < 100)
        Housegarden[index++] = new Dog();
         
    std::cout << "----------OrthoDoxTst-----------"<< std::endl;
    
    Newcat.SeatBrainCat(0,"Hi New idea");
    OtheCat.PrintBrean(0);
    OtheCat = Newcat;
    OtheCat.PrintBrean(0);
    
    std::cout << "--------Destructor----------- " << std::endl;
    
    index = 0;
    while (index < 100)
        delete Housegarden[index++];
        
    std::cout << "\n----------Finish Destructor Loop---------" << std::endl;
    
    delete j;
    delete i;
    
    std::cout <<"\n ---------StackDestructor----------------------------- " << std::endl;
    
    return 0;
}
