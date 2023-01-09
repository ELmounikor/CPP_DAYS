/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:48:02 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/09 12:43:24 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int                 integer;
		static const int    accuracy = 8;
	public:
		Fixed(void);
		Fixed(int x);
		Fixed(float y);
		Fixed(Fixed &old);
		~Fixed();
		void operator=(const Fixed& C);
		void setRawBits( int const raw );
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif
