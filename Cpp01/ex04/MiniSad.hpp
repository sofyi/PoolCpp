/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiniSad.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:34:44 by angel             #+#    #+#             */
/*   Updated: 2025/12/06 11:03:26 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISAD_HPP
#define MINISAD_HPP

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