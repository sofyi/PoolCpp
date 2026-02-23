/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:35:28 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/23 16:51:48 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
  Data *data;
  Data *NewData;
  
  uintptr_t num;
  data = new Data;
  data->Name = "safia";
  std::cout << "Address of original data: " << data << std::endl;
  
  std::cout << "DataName: " << data->Name << std::endl;
  num = Serializer::serialize(data);
  
  std::cout <<"\nRead Adress As unitptr_t : " << num << std::endl;
  
  NewData = Serializer::deserialize(num);
  
  std::cout << "\nDeserialized uintptr_t back to pointer: " << NewData << std::endl; 
  std::cout << "NewDataName: " << NewData->Name << std::endl;
  delete data;
}

