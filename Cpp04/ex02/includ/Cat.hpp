/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:54:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 21:20:05 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat: public Animal
{
    private:
        Brain *CatBrain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &obj);
        Cat& operator=(const Cat &obj);
        //----------OrthoDox--------------
      //  void makeSound()const;
        void PrintBrean(unsigned int index) const;
        void SeatBrainCat(unsigned int index, std::string New);
};

#endif