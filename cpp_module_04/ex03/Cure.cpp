/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:35:36 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:37 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure: Constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure: Destructor called" << std::endl;
}

Cure::Cure(Cure const &obj) : AMateria()
{
	*this = obj;
	std::cout << "Cure: Copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
		std::cout << "Cure: Copy assignment operator called" << std::endl;
	}
	return *this;
}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}
