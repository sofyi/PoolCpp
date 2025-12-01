/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:44:54 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/29 11:17:38 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	std::string input;
	PhoneBook phonebook;

	(void)av;
	if (ac > 1)
		return (std::cout<< "Just one parameter.....", 1);
	while(true)
	{
		std::cout<< "Enter --> : ADD, SEARCH, EXIT"<< std::endl<< "-->";
		if (!std::getline(std::cin, input) || !input.compare("EXIT"))
			break;
		if (!input.compare("ADD"))
			phonebook.AddContact();
		else if (!input.compare("SEARCH"))
		{
			phonebook.PrintData();
		 	phonebook.SerchContact();
		}
		if (std::cin.eof())
			break;
	}
}
