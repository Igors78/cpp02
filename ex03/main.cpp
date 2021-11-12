/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:34:07 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 16:04:15 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <limits>

int main(void)
{
	float a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0, p1 = 0, p2 = 0;

	std::cout << "Enter coordinates of apexes of a triangle ABC" << std::endl;
	while (true)
	{
		std::cout << "Enter apex A(X): " << std::endl;
		std::cin >> a1;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter apex A(Y): " << std::endl;
		std::cin >> a2;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter apex B(X): " << std::endl;
		std::cin >> b1;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter apex B(Y): " << std::endl;
		std::cin >> b2;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter apex C(X): " << std::endl;
		std::cin >> c1;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter apex C(Y): " << std::endl;
		std::cin >> c2;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter X of the point to check inside or not: " << std::endl;
		std::cin >> p1;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter Y of the point to check inside or not: " << std::endl;
		std::cin >> p2;
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break;
	}
	Point const a(a1, a2);
	Point const b(b1, b2);
	Point const c(c1, c2);
	Point const point(p1, p2);
	std::cout << "a.x: " << a.getX() << std::endl;
	std::cout << "a.y: " << a.getY() << std::endl;
	std::cout << "b.x: " << b.getX() << std::endl;
	std::cout << "b.y: " << b.getY() << std::endl;
	std::cout << "c.x: " << c.getX() << std::endl;
	std::cout << "c.y: " << c.getY() << std::endl;
	std::cout << "point.x: " << point.getX() << std::endl;
	std::cout << "point.y: " << point.getY() << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle!" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle!" << std::endl;
	return 0;
}
