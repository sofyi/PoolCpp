/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:05:38 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/27 12:42:54 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <typename Typ>
class Array
{
    private:
        Typ *Arr;
        size_t N;
    public:
    
//-----------------------------Exeption----------------------

    class Error  :public std::exception
    {
        public:
        const char* what() const throw();
    };
    
//----------------------------OrthoDox----------------------

    ~Array();
    Array();
    Array(unsigned int n);
    Array(const Array &otherArr);
    Array<Typ>& operator=(const Array<Typ> &OtherArr);
//-----------------------------------Operetor-----------------

    Typ& operator[](size_t Nsend);
    const Typ& operator[](size_t Nsend)const;

//------------------------------------MemberFuncion--------------
    size_t  size()const ;
};

#include "Array.tpp"

#endif