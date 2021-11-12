/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:36:15 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 08:46:21 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &source);
	~Fixed();

	Fixed &operator=(Fixed const &right);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _point;
	static const int _fractbits = 8;
};

#endif
