/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:48:39 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/05 15:30:39 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon *PointWp;
	public:
		HumanB(std::string Str);
		void	attack();
		void	setWeapon(Weapon &Club);
		~HumanB();
};
#endif