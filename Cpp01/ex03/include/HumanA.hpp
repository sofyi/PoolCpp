/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:35:15 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/07 18:19:07 by angel            ###   ########.fr       */
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
		HumanA(std::string str, Weapon &obj);
		void attack();
		~HumanA();
};
#endif