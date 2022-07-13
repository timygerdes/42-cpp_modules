/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:40:48 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/27 12:38:05 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	this->val = i * (1 << this->nbr_of_fract_bits);
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->val = roundf(f * (1 << this->nbr_of_fract_bits));
	std::cout << "Float constructor called" << std::endl;
}
	
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	if (this != &fixed)
	{
		this->val = fixed.getRawBits();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() / (1 << this->nbr_of_fract_bits));
}

float	Fixed::toFloat(void) const
{
	return ((double)this->getRawBits() / (float)(1 << this->nbr_of_fract_bits));
}

std::ostream& operator<<(std::ostream &stream, Fixed const &ref) {
	return (stream << ref.toFloat());
}
