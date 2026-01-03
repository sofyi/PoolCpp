/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 17:27:16 by slamhaou          #+#    #+#             */
/*   Updated: 2026/01/03 10:15:10 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	private:
		int					RawBits;
		static const int	Fractional;
	public:
		Fixed();
		Fixed(const Fixed &CopyObj);
		Fixed &operator=(const Fixed &RigthObj);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif