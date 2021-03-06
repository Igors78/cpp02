/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:36:15 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 08:59:08 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const &source);
	~Fixed();

	Fixed &operator=(Fixed const &right);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _point;
	static const int _fractbits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif
