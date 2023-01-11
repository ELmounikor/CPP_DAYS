/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:23:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/11 17:32:33 by mel-kora         ###   ########.fr       */
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
	(Fixed) this->x = p.x;
	(Fixed) this->y = p.y;
	return(*this);
}

Fixed const Point::getX(void)
{
	return(this->x);
}

Fixed const Point::getY(void)
{
	return(this->y);
}
