/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:24:58 by angel             #+#    #+#             */
/*   Updated: 2025/12/05 10:54:07 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
    Weapon(std::string str);
        void setType(std::string str);
        const std::string& getType();
    ~Weapon(){};
};
#endif