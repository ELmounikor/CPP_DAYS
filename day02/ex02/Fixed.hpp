/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:48:02 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 10:16:51 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int                 integer;
		static const int    accuracy = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &old);
		~Fixed();
		Fixed &operator=(const Fixed& X);
		Fixed operator+(const Fixed& X) const;
		Fixed operator-(const Fixed& X) const;
		Fixed operator*(const Fixed& X) const;
		Fixed operator/(const Fixed& X) const;
		bool operator==(const Fixed& X) const;
		bool operator!=(const Fixed& X) const;
		bool operator>=(const Fixed& X) const;
		bool operator>(const Fixed& X) const;
		bool operator<=(const Fixed& X) const;
		bool operator<(const Fixed& X) const;
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		void setRawBits( int const raw );
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min(Fixed &X, Fixed &Y);
		static Fixed const &min(const Fixed &X, const Fixed &Y);
		static Fixed &max(Fixed &X, Fixed &Y);
		static Fixed const &max(const Fixed &X, const Fixed &Y);
};

std::ostream &operator<<( std::ostream &output, const Fixed &X );

#endif
