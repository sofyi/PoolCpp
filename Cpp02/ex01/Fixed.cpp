/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/03 13:39:46 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::Fractional = 8;

//🔺_____________________________OthodoxCanonicalForm_____________________🔺

Fixed::Fixed(): RawBits(0)
{
	std::cout<<"Default constructor called "<< std::endl;
}

Fixed::Fixed(int Num)
{
	std::cout << "Int constructor called" << std::endl; 
	RawBits = Num * (1 << Fractional);
}

Fixed::Fixed(float Num)
{
	std::cout << "Float constructor called" << std::endl; 
	RawBits = round(Num * (1 << Fractional));
}

Fixed::Fixed(const Fixed &Original)
{
	std::cout<<"Copy constructor called" << std::endl;
	*this = Original;
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called" << std::endl;
}

//🔷___________________________OperatorOverLoad____________________________🔷

Fixed& Fixed::operator=(const Fixed &RigthObj)
{
	std::cout<<"Copy assignment operator called"<< std::endl;
	if (&RigthObj != this)
		this->RawBits = RigthObj.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

//🔻____________________________Function_____________________________________🔻

float Fixed::toFloat( void ) const
{
	float res = (float)(RawBits) / ( 1 << Fractional);
	return(res);
}

int Fixed::toInt( void ) const
{
	return (RawBits / (1 << Fractional));
}

int	 Fixed::getRawBits( void ) const
{
	return RawBits;
}

void Fixed::setRawBits( int const raw )
{
	RawBits = raw;
}
