/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minised.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:45:06 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/08 18:45:10 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiniSed.hpp"

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
    
    if (Original.empty())
        return (std::cout<< "-->Error: s1 cannot be empty-->"<<std::endl, false);
    std::ifstream StreamReding(NameFile);
    if (!StreamReding.is_open())
        return (std::cout<< "Error: cannot open input file" << std::endl, false);
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