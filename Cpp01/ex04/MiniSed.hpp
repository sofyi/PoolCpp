/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiniSed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:45:15 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:45:19 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISED_HPP
#define MINISED_HPP

#include <iostream>
#include <fstream>
#include <stdbool.h> 
class MiniSed
{
    private:
        std::string NameFile;
        std::string Original;
        std::string SubstituteString;
    public:
        MiniSed(std::string FileName, std::string s1, std::string substitute);
        bool    MyMiniSed(void);
        ~MiniSed();
};
#endif