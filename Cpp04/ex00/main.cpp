/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:30:53 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 18:21:49 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includ/Cat.hpp"
#include "./includ/Dog.hpp"
#include "./includ/WrongCat.hpp"

int main()
{
  const Animal objAnimal;
  const Dog objDog;
  const Cat objCat;
  const WrongCat WrongCats;
  
  std::cout << "------------Heap Creat Obj ----------\n" << std::endl;
  
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  const WrongAnimal* Wrong = new WrongCat();
  
  std::cout << "------------TstNormalObj----------\n" << std::endl;
  
  std::cout << objAnimal.getType() << std::endl;
  std::cout << objDog.getType() << std::endl;
  std::cout << objCat.getType() << std::endl;
  std::cout << WrongCats.getType() << std::endl;
  WrongCats.makeSound();
  objAnimal.makeSound();
  objDog.makeSound();
  objCat.makeSound();
  
  std::cout << "--------Tst wiht pointer parent--------\n" << std::endl;
  
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << Wrong->getType() << std::endl;
  j->makeSound();
  i->makeSound();
  meta->makeSound();
  Wrong->makeSound();
  
  std::cout << "----------Destructor..Heap-----\n" << std::endl;
  
  delete Wrong;
  delete i;
  delete j;
  delete meta;
  
  std::cout << "----------Destructor..Stackkk-----\n" << std::endl;
  return 0;
}