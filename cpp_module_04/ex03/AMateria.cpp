/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:12:14 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:09 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria: Parametric constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &obj)
{
	*this = obj;
	std::cout << "AMateria: Copy constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: Destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
		std::cout << "AMateria: Copy assignment operator called" << std::endl;
	}
	return *this;
}
	

std::string const	&AMateria::getType() const
{
	return this->_type;
}

void	AMateria::setType(std::string type)
{
	this->_type = type;
}

void AMateria::use(ICharacter& target)
{
	if (this->_type == "ice") {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
	else if (this->_type == "cure") {
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
}