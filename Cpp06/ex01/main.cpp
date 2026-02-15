/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:35:28 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/14 16:18:00 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
  Data *data;
  Data *NewPata;
  uintptr_t num;
  
  data = new Data;
  std::cout << "Address of original data: " << data << std::endl;
  
  num = Serializer::serialize(data);
  
  std::cout <<"Read Adress As unitptr_t : " << num << std::endl;
  
  NewPata = Serializer::deserialize(num);

  std::cout << "Deserialized uintptr_t back to pointer: " << NewPata << std::endl; 
  delete data;
    
}

