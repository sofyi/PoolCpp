/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:37:07 by angel             #+#    #+#             */
/*   Updated: 2025/12/07 15:12:07 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class   Harl
{
    private:
        void    debeg(void);
        void    info(void);
        void    warning(void);
        void    error(void);
       const  char    *StringTabel[4];
        void (Harl::*point[4])();
    public:
      Harl();
        void    compain(std::string level);
      ~Harl();
};

#endif