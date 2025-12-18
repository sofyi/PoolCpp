/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:16 by slamhaou          #+#    #+#             */
/*   Updated: 2025/12/18 18:18:07 by slamhaou         ###   ########.fr       */
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
		Fixed(double num);// tst the double matensy tchilihaa3aaa
		Fixed(const Fixed &CopyObj);
		Fixed &operator=(const Fixed &RigthObj);
		Fixed operator*(const Fixed &RigthObj);
		Fixed(int Num);
		Fixed(float Num);
		~Fixed();
//_____________ClassMemberFuntion_______________

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		friend std::ostream& operator<<(std::ostream &out, const Fixed &obj);
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);//han al chining lama nraje3 this

#endif