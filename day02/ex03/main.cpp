/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 08:59:04 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point a;
    Point b(2, 5.5f);
    Point c(4, 0);
    Point p(3.5, 3);
    Point op(2, 2);

    std::cout << "triangle abc area =" << Point::area(a, b, c) << "\n" << bsp(a, b, c, p) << std::endl;

    return 0;
}