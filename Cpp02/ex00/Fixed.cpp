/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/03 12:10:26 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::Fractional = 8;
Fixed::Fixed(): RawBits(0)
{
	std::cout<<"Default constructor called "<< std::endl;
}

Fixed::Fixed(const Fixed &Original)
{
	std::cout<<"Copy constructor called" << std::endl;
	this->RawBits = Original.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &RigthObj)
{
	std::cout<<"Copy assignment operator called"<< std::endl;
	if (&RigthObj != this)
		this->RawBits = RigthObj.getRawBits();
	return *this;
}
Fixed::~Fixed()
{
	std::cout<< "Destructor called" << std::endl;
}

int	 Fixed::getRawBits( void ) const
{
	std::cout<< "getRawBits member function called";
	std::cout << std::endl;
	return RawBits;
}
void Fixed::setRawBits( int const raw )
{
	RawBits = raw;
}