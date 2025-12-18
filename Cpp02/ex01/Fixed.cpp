/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/18 15:41:00 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::FixedPoint = 8;

//🔺_____________________________OthodoxCanonicalForm_____________________🔺

Fixed::Fixed(): RawBits(0)
{
	std::cout<<"Default constructor called "<< std::endl;
}

Fixed::Fixed(int Num)
{
	std::cout << "Int constructor called" << std::endl; 
	RawBits = Num * (1 << FixedPoint);
}
Fixed::Fixed(double Num) // tst doobleeeeeee eeeeee sheeeeeeeelhaaaaaaa
{
	std::cout << "doooooblee constructor called " << Num << std::endl; 
}
Fixed::Fixed(float Num)
{
	std::cout << "Float constructor called" << std::endl; 
	RawBits = round(Num * (1 << FixedPoint));
}

Fixed::Fixed(const Fixed &Original)
{
	std::cout<<"Copy constructor called" << std::endl;
	this->RawBits = Original.getRawBits();//tnakeshe fde tany bta3t tnady 3la operator
}

Fixed::~Fixed(){
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
	out << (float)obj.RawBits / (1 << obj.FixedPoint);
	return (out);
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
	std::cout<< "getRawBits member function called";
	std::cout << std::endl;
	return RawBits;
}

void Fixed::setRawBits( int const raw )
{
	RawBits = raw;
}
