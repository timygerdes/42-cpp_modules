/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:29:31 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:30:21 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_dogBrain = new Brain;
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
	delete this->_dogBrain;
}

Dog &Dog::operator=(Dog const &obj)
{
	if (this != &obj)
	{
		this->_type = std::string(obj._type);
		this->_dogBrain = new Brain;
		for (int i = 0; i < 100; i++)
			this->_dogBrain->setIdeaByIndex(i, obj.getBrain()->getIdeaByIndex(i));
	}
	return *this;
}

Brain*	Dog::getBrain(void) const
{
	return this->_dogBrain;
}

void	Dog::setBrain(Brain* brain)
{
	this->_dogBrain = brain;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}