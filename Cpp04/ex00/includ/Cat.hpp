/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:54:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/16 12:29:00 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class   Cat: public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &obj);
        Cat& operator=(const Cat &obj);
        void makeSound()const;
};
#endif