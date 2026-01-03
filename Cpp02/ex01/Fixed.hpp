/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/03 13:40:30 by slamhaou         ###   ########.fr       */
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
		static const int	Fractional;
	public:
		Fixed();
		Fixed(int Num);
		Fixed(float Num);
		Fixed(const Fixed &CopyObj);
		Fixed &operator=(const Fixed &RigthObj);
		~Fixed();
		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif