/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:44:21 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/11 18:31:20 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class   Harl
{
    private:
      void    debug(void);
      void    info(void);
      void    warning(void);
      void    error(void);
      std::string StringTabel[4];
      void (Harl::*point[4])();
    public:
      Harl();
        void    compain(std::string level);
      ~Harl();
};

#endif