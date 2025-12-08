/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:28:36 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:28:37 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBI_HPP
#define ZOMBI_HPP

#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
    Zombie(std::string name);
        void announce( void );
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif