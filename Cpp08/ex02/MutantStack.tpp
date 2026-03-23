/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:45 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/20 02:58:38 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


//___________OrthoDox_____________
template <typename Typ>
MutantStack<Typ>::MutantStack(){}

template <typename Typ>
MutantStack<Typ>::~MutantStack(){}

template <typename Typ>
MutantStack<Typ>::MutantStack(const MutantStack<Typ> &obj):std::stack<Typ>(obj){}

template <typename Typ>
MutantStack<Typ>& MutantStack<Typ>::operator=(const MutantStack &obj)
{
	*this = obj; 	
}

//________________--MemberFunction--_________________


template <typename Typ>
typename std::stack<Typ>::container_type::iterator  MutantStack<Typ>::begin()
{
	 return this->c.begin();
}

template <typename Typ>
typename std::stack<Typ>::container_type::iterator  MutantStack<Typ>::end()
{
	return this->c.end();
}

template <typename Typ>
typename std::stack<Typ>::container_type::const_iterator MutantStack<Typ>::begin() const
{
	return this->c.begin();
}

template <typename Typ>
typename std::stack<Typ>::container_type::const_iterator MutantStack<Typ>::end() const // 3lash ile dert ger const_iterator mquqbelsh
{
	return this->c.end();
}