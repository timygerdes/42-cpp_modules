/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:25:24 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:30:15 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_catBrain = new Brain;
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
	this->_type = type;
	std::cout << "Cat: Parametric constructor called" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal()
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->_catBrain;
}

Cat &Cat::operator=(Cat const &obj)
{
	if (this != &obj)
	{
		this->_type = std::string(obj._type);
		this->_catBrain = new Brain;
		for (int i = 0; i < 100; i++)
			this->_catBrain->setIdeaByIndex(i, obj.getBrain()->getIdeaByIndex(i));
	}
	return *this;
}

Brain*	Cat::getBrain(void) const
{
	return this->_catBrain;
}

void	Cat::setBrain(Brain* brain)
{
	this->_catBrain = brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}