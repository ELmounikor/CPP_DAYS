/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/11 17:17:10 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point p;
    Point z(42.0f, 1.5f);
    
    std::cout << "px=" << p.getX() << " py=" << p.getY() << std::endl;
    std::cout << "zx=" << z.getX() << " zy=" << z.getY() << std::endl;

    return 0;
}