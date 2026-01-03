/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/03 17:31:15 by slamhaou         ###   ########.fr       */
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
	this->RawBits = Original.getRawBits();
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

bool	Fixed::operator<(const Fixed &RigthObj)const
{
	
	if (toFloat() < RigthObj.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed &RigthObj)const
{
	if (toFloat() > RigthObj.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed &RigthObj)const
{
	if (toFloat() <= RigthObj.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed &RigthObj)const
{
	if (toFloat() >= RigthObj.toFloat())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed &RigthObj)const
{
	if (toFloat() == RigthObj.toFloat())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed &RigthObj)const
{
	if (toFloat() != RigthObj.toFloat())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &RigthObj)const
{
	Fixed TmpObj;
	
	TmpObj = Fixed(this->toFloat() + RigthObj.toFloat());
	return TmpObj;
}

Fixed Fixed::operator-(const Fixed &RigthObj)const
{
	Fixed TmpObj;
	
	TmpObj = Fixed(this->toFloat() - RigthObj.toFloat());
	return TmpObj;
}

Fixed Fixed::operator*(const Fixed &RigthObj)const
{
	Fixed TmpObj;

	TmpObj = Fixed(this->toFloat() * RigthObj.toFloat());
	return (TmpObj);
}

Fixed Fixed::operator/(const Fixed &RigthObj)const
{
	Fixed TmpObj;
	if ((RigthObj.getRawBits() / 256) == 0)
	{
		std::cout<< "error cant division by 0???" << std::endl;
		return RigthObj;
	}
	TmpObj = Fixed(this->toFloat() / RigthObj.toFloat());
	return (TmpObj);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	RawBits++;
	return tmp;
}

Fixed&	Fixed::operator++()
{
	RawBits++;

	return (*this);
}

Fixed&	Fixed::operator--()
{
	RawBits--;

	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	RawBits--;
	return tmp;
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
	return RawBits;
}

void Fixed::setRawBits( int const raw )
{
	RawBits = raw;
}

Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return	obj1;
	return 	obj2;
}

const Fixed&	Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return	obj1;
	return obj2;
}

Fixed&Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return	obj1;
	return	obj2;
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return	obj1;
	return	obj2;
}
