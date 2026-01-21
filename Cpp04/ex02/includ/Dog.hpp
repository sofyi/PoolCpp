/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:53:02 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 17:13:23 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog: public Animal
{
    private:
        Brain *BrainDog;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog& operator=(const Dog &obj);
        void makeSound()const;
        void PrintBrean(unsigned int index) const;
        void SeatBrainDog(unsigned int index ,std::string New);
};

#endif