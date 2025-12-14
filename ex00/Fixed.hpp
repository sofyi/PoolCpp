/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/13 14:19:24 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixd 
{
	private:
		std::string name;
		
	public:
		Fixd(){
			name = "SAFIA";
			p = NULL;
			std::cout<<"HHHalooo\n";
		};
		Fixd(Fixd &obj)
		{
			// name = obj.name;
			std::cout << "iam coopuing \n" << std::endl;
		}
		std::string get();
		~Fixd(){
			std::cout << "noon"<<std::endl;
		};
		std::string *p;
};

#endif