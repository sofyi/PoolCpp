/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:35:15 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/05 12:28:22 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon &objj;
	public:
		HumanA(std::string str, Weapon &obj):objj(obj), name(str){};
		void attack();
		~HumanA(){};
};
#endif