/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:52 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/18 23:35:13 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename Typ>
class  MutantStack : public std::stack<Typ>
{
	
	public:	
	//___________OrthoDox_____________
	
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack &obj);
	MutantStack& operator=(const MutantStack &obj);
	
	//____________MemberFunction__________________
	
	typedef typename std::stack<Typ>::container_type::iterator iterator;
	iterator begin();
	iterator  end();
};
#include "MutantStack.tpp"