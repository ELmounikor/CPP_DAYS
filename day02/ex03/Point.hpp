/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:23:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 08:35:03 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(float const x, float const y);
	Point(const Point &p);
	~Point();
	// Fixed const getX(void);
	// Fixed const getY(void);
	Point &operator=(const Point &p);
	static float area(Point const a, Point const b, Point const c);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif