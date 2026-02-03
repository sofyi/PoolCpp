/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:11:41 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/01 15:54:25 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm:public AForm
{
    private:
        std::string Target;
    public:
        ~PresidentialPardonForm();
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator=(const  PresidentialPardonForm &obj);
    ////////-------------------------------
    void  ExecuteForm()const;
};


#endif
