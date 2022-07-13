/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:21:46 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:12:03 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->setIdeaByIndex(i, "NULL");
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &obj)
{
	std::cout << "Brain: Asignment constructor called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->setIdeaByIndex(i, obj.getIdeaByIndex(i));
	}
	return *this;
}

std::string	Brain::getIdeaByIndex(size_t index) const
{
	if (index < 100)
		return (this->_ideas[index]);
	else
		return "Error: Index is out of bounds!";
}

void		Brain::setIdeaByIndex(size_t index, std::string idea)
{
	if (index < 100)
		this->_ideas[index] = idea;
	else
	{
		std::cout << "Error: Index is out of bonds. Could not save new idea." << std::endl;
		return ;
	}
}