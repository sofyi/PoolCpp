/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:45 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/26 02:41:42 by slamhaou         ###   ########.fr       */
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
	if (this != &obj)
		std::stack<Typ>::operator=(obj);
	return *this;
}

//________________--MemberFunction--_________________


template <typename Typ>
typename MutantStack<Typ>::iterator  MutantStack<Typ>::begin()
{
	if (std::stack<Typ>::c.size() == 0)
		throw std::out_of_range("empty MutantStack");
	 return this->c.begin();
}

template <typename Typ>
typename MutantStack<Typ>::iterator  MutantStack<Typ>::end()
{
	if (std::stack<Typ>::c.size() == 0)
		throw std::out_of_range("empty MutantStack");
	return this->c.end();
}

template <typename Typ>
typename MutantStack<Typ>::const_iterator MutantStack<Typ>::begin() const
{
	if (std::stack<Typ>::c.size() == 0)
		throw std::out_of_range("empty MutantStack");
	return this->c.begin();
}

template <typename Typ>
typename MutantStack<Typ>::const_iterator MutantStack<Typ>::end() const
{
	if (std::stack<Typ>::c.size() == 0)
		throw std::out_of_range("empty MutantStack");
	return this->c.end();
}