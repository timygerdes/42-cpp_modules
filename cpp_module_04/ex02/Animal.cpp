/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:14:19 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:20:14 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "";
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal: Parametric constructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &obj)
{
	if (this != &obj)
	{
		this->_type = std::string(obj._type);
	}
	return *this;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Random animal sound!" << std::endl;
}