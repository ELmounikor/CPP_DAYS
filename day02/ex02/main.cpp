/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 10:32:08 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    // Fixed c( Fixed( 6.5f ) + Fixed( 2 ) );
    // std::cout << "c=" << c << std::endl;
    // std::cout << Fixed::min( c, a ) << std::endl;
    // std::cout << "a=" << a <<std::endl;
    // a = c = b;
    // std::cout << "a=" << a <<std::endl;
    // std::cout << "b=" << b <<std::endl;
    // std::cout << "c=" << c << std::endl;
    if (a < b)
        std::cout << a << " < " << b <<std::endl;
    return 0;
}