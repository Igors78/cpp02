/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:36:10 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 09:35:51 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

Fixed &Fixed::operator=(Fixed const &right)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &right)
		this->_point = right.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const rawbits)
{
	this->_point = rawbits;
}
