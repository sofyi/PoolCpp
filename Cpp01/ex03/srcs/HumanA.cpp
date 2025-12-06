/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:54:56 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/05 12:34:02 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

void	HumanA::attack()
{
	std::cout<< name << " attacks with their " << objj.getType() << std::endl;
}