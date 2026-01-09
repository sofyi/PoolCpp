/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/03 17:33:49 by slamhaou         ###   ########.fr       */
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
		Fixed(int Num);
		Fixed(float Num);
		Fixed(const Fixed &CopyObj);
		~Fixed();
		Fixed&	operator=(const Fixed &RigthObj);
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
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&		min(Fixed &obj1, Fixed &obj2);
		static const Fixed&	min(const Fixed &obj1, const Fixed &obj2);
		static const Fixed&	max(const Fixed &obj1, const Fixed &obj2);
		static Fixed&		max(Fixed &obj1, Fixed &obj2);
		
//_____________ClassMemberFuntion_______________

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif