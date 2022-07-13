/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:29:31 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:28:53 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
	this->_type = type;
	std::cout << "Dog: Parametric constructor called" << std::endl;
}

Dog::Dog(Dog const &obj) : Animal()
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj)
{
	if (this != &obj)
	{
		this->_type = std::string(obj._type);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}