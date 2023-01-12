/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:23:54 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 08:59:16 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float total = 0;
    
    if (Point::area(a, b , point) && Point::area(a, c , point) && Point::area(c, b , point))
    {
        total = Point::area(a, b , point) + Point::area(a, c , point) + Point::area(c, b , point);
        if (total == Point::area(a, b, c))
            return(1);
    }
    return(0);
}
