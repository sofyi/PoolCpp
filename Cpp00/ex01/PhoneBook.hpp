/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:18:29 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/15 11:07:06 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacs[8];
		int	IndexContact;
	public:
		PhoneBook();
		void	AddContact();
		void	SerchContact();
		void	PrintData();	
};
#endif