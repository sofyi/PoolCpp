/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:52:24 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/09 10:52:28 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class  FragTrap: public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const std::string &Name);
        void highFivesGuys(void);
        
};

#endif