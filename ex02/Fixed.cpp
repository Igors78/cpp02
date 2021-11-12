/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:36:10 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/12 13:35:25 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _point(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &source)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (this->_point);
}

Fixed &Fixed::operator=(Fixed const &right)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &right)
		this->_point = right.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const rawbits)
{
	this->_point = rawbits;
}

Fixed::Fixed(const float f) : _point(roundf(f * (1 << Fixed::_fractbits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _point(i << Fixed::_fractbits)
{
	// std::cout << "Int constructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return ((float)this->_point / (float)(1 << Fixed::_fractbits));
}

int Fixed::toInt() const
{
	return (this->_point >> Fixed::_fractbits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}

// Compare overloading
bool Fixed::operator<(Fixed const &right) const
{
	return this->getRawBits() < right.getRawBits();
}
bool Fixed::operator>(Fixed const &right) const
{
	return this->getRawBits() > right.getRawBits();
}
bool Fixed::operator<=(Fixed const &right) const
{
	return this->getRawBits() <= right.getRawBits();
}
bool Fixed::operator>=(Fixed const &right) const
{
	return this->getRawBits() >= right.getRawBits();
}
bool Fixed::operator==(Fixed const &right) const
{
	return this->getRawBits() == right.getRawBits();
}
bool Fixed::operator!=(Fixed const &right) const
{
	return this->getRawBits() != right.getRawBits();
}

// Arythmetic overloading
Fixed Fixed::operator+(Fixed const &right) const
{
	Fixed result(*this);
	result.setRawBits(this->getRawBits() + right.getRawBits());
	return result;
}
Fixed Fixed::operator-(Fixed const &right) const
{
	Fixed result(*this);
	result.setRawBits(this->getRawBits() - right.getRawBits());
	return result;
}
Fixed Fixed::operator*(Fixed const &right) const
{
	Fixed result(*this);
	result.setRawBits(((long)this->getRawBits() * (long)right.getRawBits()) / (1 << Fixed::_fractbits));
	return result;
}
Fixed Fixed::operator/(Fixed const &right) const
{
	Fixed result(*this);
	if (right._point == 0)
	{
		std::cout << "Cannot divide by zero" << std::endl;
		return result;
	}
	result.setRawBits(((long)this->getRawBits() * (1 << Fixed::_fractbits)) / (long)right.getRawBits());
	return result;
}

//(++)(--)Overloading
Fixed &Fixed::operator++()
{
	this->_point++;
	return (*this);
}
Fixed &Fixed::operator--()
{
	this->_point--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed result(*this);
	operator++();
	return result;
}
Fixed Fixed::operator--(int)
{
	Fixed result(*this);
	operator--();
	return result;
}

// MIN MAX
Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	return left < right ? left : right;
}
Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	return left > right ? left : right;
}
Fixed const &Fixed::min(Fixed const &left, Fixed const &right)
{
	return left < right ? left : right;
}
Fixed const &Fixed::max(Fixed const &left, Fixed const &right)
{
	return left > right ? left : right;
}
