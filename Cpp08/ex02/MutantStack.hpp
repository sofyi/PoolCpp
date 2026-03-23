/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:18:52 by slamhaou          #+#    #+#             */
/*   Updated: 2026/03/20 02:58:10 by slamhaou         ###   ########.fr       */
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
	typedef typename std::stack<Typ>::container_type::const_iterator const_iterator;
	
	iterator begin();
	iterator  end();
	const_iterator  begin() const;
	const_iterator  end() const;
};

#include "MutantStack.tpp"