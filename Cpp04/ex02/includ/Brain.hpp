/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:43:19 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/21 17:11:12 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
         Brain();
        ~Brain();
         Brain(const Brain &obj);
         Brain& operator=(const Brain &obj);
         //-------------ORHTO DOX---------------------
         
         std::string    GetIdeas(unsigned int index)const;
         void           SetIdeas(unsigned int index, std::string NewIdea);
};


#endif