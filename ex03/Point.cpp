/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:20:15 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 15:33:38 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// CONSTRUCTOR - DESTRUCTOR
Point::Point() : _x(0), _y(0)
{
}
Point::~Point()
{
}
Point::Point(float const x, float const y) : _x(x), _y(y)
{
}
Point::Point(Point const &source) : _x(source.getX()), _y(source.getY())
{
}
// OVERLOAD
Point &Point::operator=(Point const &)
{
	return (*this);
}
// MEMBERS
Fixed const &Point::getX() const
{
	return (this->_x);
}
Fixed const &Point::getY() const
{
	return (this->_y);
}
