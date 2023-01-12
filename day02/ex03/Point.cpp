/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:23:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 17:17:58 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::Point(float const x, float const y) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(const Point &p) : x(Fixed(p.x)), y(Fixed(p.y))
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point &p)
{
	if (this != &p)
	{
		(Fixed) this->x = p.x;
		(Fixed) this->y = p.y;
	}
	return(*this);
}

float Point::area(Point const a, Point const b, Point const c)
{
	Fixed const &A =  Fixed(0.5f) * (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));
	if (A.toFloat() >= 0)
		return(A.toFloat());
	return((A * Fixed(-1)).toFloat());
}

// Fixed const Point::getX(void)
// {
// 	return(this->x);
// }

// Fixed const Point::getY(void)
// {
// 	return(this->y);
// }
