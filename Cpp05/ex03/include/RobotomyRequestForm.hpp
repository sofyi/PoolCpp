/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:38:00 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/01 16:03:10 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUSTFORM_HPP
#define ROBOTOMYREQUSTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
class RobotomyRequestForm: public AForm
{
    private:
        std::string Target;
     
    public:
    
        ~RobotomyRequestForm();
        RobotomyRequestForm();
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);  
        RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);  

    //-------------MeMber Function------------------------------
        void ExecuteForm()const;
};

#endif