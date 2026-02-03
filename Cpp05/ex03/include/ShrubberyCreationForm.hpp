/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:29:37 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/01 15:58:36 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string Target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string Target);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);

        //--------------MeMberFunction-------------------------
        class  ErorStreamFile: public std::exception
        {
            public:
                const char *what()const throw();
        };
        void    ExecuteForm()const;
};
#endif