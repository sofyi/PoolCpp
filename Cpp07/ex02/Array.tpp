/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:19:10 by slamhaou          #+#    #+#             */
/*   Updated: 2026/02/27 13:15:24 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//______________________________OrthoDox__________________________


template <typename Typ>
Array<Typ>::~Array()
{
    delete []Arr;
}

template <typename Typ>
Array<Typ>::Array()
{
    Arr = NULL;
    N = 0;
}

template <typename Typ>
Array<Typ>::Array(unsigned int n)
{
    if (n == 0)
        Arr = NULL;
    else
        Arr = new Typ[n]();
    N = n;
}

template <typename T>
Array<T>::Array(const Array &otherArr)
{
    size_t Index;
    Index = 0;
    
    this->N = otherArr.N;
    Arr = new T[otherArr.N]();    
    while (Index < otherArr.N)
    {
        Arr[Index] = otherArr.Arr[Index];
        Index++;
    }
}

template <typename Typ>
Array<Typ>& Array<Typ>::operator=(const Array<Typ> &OtherArr)
{
    if (this != &OtherArr)
    {
        size_t  Index;        
        Index = 0;
        
        delete [] Arr;
        Arr = new Typ[OtherArr.N];
        for(Index = 0;Index < OtherArr.N; Index++)   
            Arr[Index] = OtherArr.Arr[Index];
       std::cout << Index << std::endl;
    }
    return *this;
}

//--_______________________________Operetor_________________________________


template <typename T>
T& Array<T>::operator[](size_t Nsend)
{
    if (Nsend >= this->N)
        throw Error();
    return Arr[Nsend];  
}

template <typename T>
const T& Array<T>::operator[](size_t Nsend)const
{
    if (Nsend >= this->N)
        throw Error();
    return Arr[Nsend];  
}


//________________________inerClass_______________________________________

template<typename T>
const char* Array<T>::Error::what() const throw()
{
    return "Eroro in program";
}

template <typename T>
size_t Array<T>::size()const
{
    return N;
}