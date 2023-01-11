/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:23:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/11 12:41:48 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point:: Point(float const x, float const y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::~Point()
{
}