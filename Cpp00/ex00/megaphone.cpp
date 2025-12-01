/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:16:24 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/22 18:12:14 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_uper(std::string str)
{
	char c;
	size_t	i;
	
	i = 0;
	while (str[i])
	{
		c = std::toupper(str[i++]);
		std::cout<< c;
	}
}

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
		to_uper(av[i++]);
	std::cout<< std::endl;
}