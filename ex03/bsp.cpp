/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:26:28 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 16:02:35 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed gf(Point const a, Point const b, Point const d)
{
	return (d.getX() - a.getX()) *
			   (b.getY() - a.getY()) -
		   (d.getY() - a.getY()) * (b.getX() - a.getX());
}

bool f(Point const a, Point const b, Point const c, Point const d)
{
	return (gf(a, b, c) * gf(a, b, d) > 0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "---------------RESULT-----------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	if (f(a, b, c, point) && f(b, c, a, point) && f(c, a, b, point))
		return (true);
	return (false);
}
