/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:30 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/13 14:18:22 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

// int main( void ) {
// Fixed a;
// Fixed b( a );
// Fixed c;
// c = b;
// std::cout << a.getRawBits() << std::endl;
// std::cout << b.getRawBits() << std::endl;
// std::cout << c.getRawBits() << std::endl;
// return 0;
// }
std::string	Fixd::get(void)
{
	return name;
}
void	hall(Fixd obj)
{
	std::cout<< obj.get();
}
int main()
{
	// std::string c = "d";
	Fixd obj;
	// obj.p = &c;
	std::cout<< obj.get();
	hall(obj);
}