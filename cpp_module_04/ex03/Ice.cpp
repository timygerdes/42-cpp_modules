/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:45:09 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:46 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice: Constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice: Destructor called" << std::endl;
}

Ice::Ice(Ice const &obj) : AMateria()
{
	*this = obj;
	std::cout << "Ice: Copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
		std::cout << "Ice: Copy assignment operator called" << std::endl;
	}
	return *this;
}

Ice	*Ice::clone() const
{
	return new Ice(*this);
}