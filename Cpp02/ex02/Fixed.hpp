/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/31 18:49:10 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed 
{
	private:
		int					RawBits;
		static const int	FixedPoint;
	public:
		Fixed();
		Fixed(const Fixed &CopyObj);
		Fixed	operator=(const Fixed &RigthObj);
		bool	operator<(const Fixed &RigthObj)const;
		bool	operator>(const Fixed &RigthObj)const;
		bool	operator<=(const Fixed &RigthObj)const;
		bool	operator>=(const Fixed &RigthObj)const;
		bool	operator==(const Fixed &RigthObj)const;
		bool	operator!=(const Fixed &RigthObj)const;
		
		Fixed 	operator*(const Fixed &RigthObj)const;
		Fixed	operator+(const Fixed &RigthObj)const;
		Fixed 	operator-(const Fixed &RigthObj)const;
		Fixed 	operator/(const Fixed &RigthObj)const;
		Fixed	operator++(int);// a++
		Fixed&	operator++();// ++a
		static Fixed&		min(Fixed &obj1, Fixed &obj2);
		static const Fixed&	min(const Fixed &obj1, const Fixed &obj2);
		static const Fixed&	max(const Fixed &obj1, const Fixed &obj2);
		static Fixed&		max(Fixed &obj1, Fixed &obj2);
		Fixed(int Num);
		Fixed(float Num);
		~Fixed();
//_____________ClassMemberFuntion_______________

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);//han al chining lama nraje3 this

#endif