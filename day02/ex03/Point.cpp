/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:23:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/14 17:51:59 by mel-kora         ###   ########.fr       */
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
	return(A.toFloat() * -1);
}
