/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:40:48 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/27 12:56:44 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->val = 0;
}

Fixed::Fixed(const int i)
{
	this->val = i * (1 << this->nbr_of_fract_bits);
}

Fixed::Fixed(const float f)
{
	this->val = roundf(f * (1 << this->nbr_of_fract_bits));
}
	
Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	if (this != &fixed)
	{
		this->val = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(void)
{
	this->val = 0;
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

std::ostream& operator<<(std::ostream &stream, Fixed const &ref)
{
	return (stream << ref.toFloat());
}

bool	Fixed::operator>(Fixed const &ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool Fixed::operator>=(Fixed const &ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool Fixed::operator<(Fixed const &ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool Fixed::operator<=(Fixed const &ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool Fixed::operator==(Fixed const &ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}
bool Fixed::operator!=(Fixed const &ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}


Fixed Fixed::operator+(Fixed const &ref) const
{
	return (Fixed(this->toFloat() + ref.toFloat()));
}

Fixed Fixed::operator-(Fixed const &ref) const
{
	return (Fixed(this->toFloat() - ref.toFloat()));
}

Fixed Fixed::operator*(Fixed const &ref) const
{
	return (Fixed(this->toFloat() * ref.toFloat()));
}

Fixed Fixed::operator/(Fixed const &ref) const
{
	return (Fixed(this->toFloat() / ref.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	this->val++;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->val--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);

}


Fixed& Fixed::min(Fixed &ref1, Fixed &ref2)
{
	return (ref1 > ref2 ? ref2 : ref1);
}

Fixed& Fixed::max(Fixed &ref1, Fixed &ref2)
{
	return (ref1 > ref2 ? ref1 : ref2);
}


const Fixed& Fixed::min(Fixed const &fpn1, Fixed const &fpn2)
{
	return (fpn1 > fpn2 ? fpn2 : fpn1);
}

const Fixed& Fixed::max(Fixed const &fpn1, Fixed const &fpn2)
{
	return (fpn1 > fpn2 ? fpn1 : fpn2);
}
