/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:34:07 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/11 23:22:10 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.2f);
	Fixed const d(b);
	a = Fixed(1234.4321f);

	std::cout << "a is" << a << std::endl;
	std::cout << "b is" << b << std::endl;
	std::cout << "c is" << c << std::endl;
	std::cout << "d is" << d << std::endl;

	std::cout << "a is" << a.toInt() << " as integer" << std::endl;
	std::cout << "b is" << b.toInt() << " as integer" << std::endl;
	std::cout << "c is" << c.toInt() << " as integer" << std::endl;
	std::cout << "d is" << d.toInt() << " as integer" << std::endl;

	return 0;
}
