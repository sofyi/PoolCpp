/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/19 10:32:28 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::FixedPoint = 8;
//🔺_____________________________OthodoxCanonicalForm_____________________🔺

Fixed::Fixed(): RawBits(0){}

Fixed::Fixed(int Num)
{
	RawBits = Num * (1 << FixedPoint);
}

Fixed::Fixed(float Num)
{
	RawBits = round(Num * (1 << FixedPoint));
}

Fixed::Fixed(const Fixed &Original)
{
	std::cout<<"Copy constructor called" << std::endl;
	this->RawBits = Original.getRawBits();//tnakeshe fde tany bta3t tnady 3la operator
}

Fixed::~Fixed(){}

//🔷___________________________OperatorOverLoad____________________________🔷

Fixed& Fixed::operator=(const Fixed &RigthObj)
{
	if (&RigthObj != this)
		this->RawBits = RigthObj.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

Fixed Fixed::operator*(const Fixed &RigthObj)
{
	Fixed TmpObj;

	// float a = (((float)this->RawBits / 256) * ((float)RigthObj.RawBits / 256));
	// std::cout << "this out :" << a << std::endl;
	TmpObj = Fixed(this->toFloat() * RigthObj.toFloat());
	return (TmpObj);
}

//🔻____________________________Function_____________________________________🔻

float Fixed::toFloat( void ) const
{
	float res = (float)(RawBits) / ( 1 << FixedPoint);
	return(res);
}

int Fixed::toInt( void ) const
{
	return (RawBits / (1 << FixedPoint));
}

int	 Fixed::getRawBits( void ) const
{
	//std::cout<< "getRawBits member function called";
	//std::cout << std::endl;
	return RawBits;
}

void Fixed::setRawBits( int const raw )
{
	RawBits = raw;
}
