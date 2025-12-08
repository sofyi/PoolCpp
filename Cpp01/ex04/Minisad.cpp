/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minisad.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 17:45:03 by angel             #+#    #+#             */
/*   Updated: 2025/12/08 15:25:09 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniSad.hpp"

MiniSed::MiniSed(std::string FileName, std::string s1, std::string substitute)
{
    Original = s1;
    NameFile = FileName;
    SubstituteString = substitute;
}
bool   MiniSed::MyMiniSed(void)
{
    size_t Index;
    std::string Str;
    std::string buff;
    
    std::ifstream StreamReding(NameFile);
    if (!StreamReding.is_open())
        return ( std::cout<< "Bad Open File ~~" << std::endl, false);
    std::ofstream OutFile(NameFile + ".replace");
    while (true)
    {
        buff.clear();
        if (!std::getline(StreamReding, Str))
             break;
        while (true)
        {
            Index = Str.find(Original);
            if (Index == Str.npos)
                break;
            buff += Str.substr(0, Index);
            buff += SubstituteString;
            Index += Original.length();
            Str = Str.substr(Index);
        }
             OutFile << buff + Str;
             if (!StreamReding.eof())
                    OutFile << std::endl;   
    }
    StreamReding.close();
    OutFile.close();
    return (true);
}
MiniSed::~MiniSed(){}