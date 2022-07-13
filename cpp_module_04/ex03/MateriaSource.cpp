/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:22:58 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:24:26 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	std::cout << "MateriaSource: Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	*this = obj;
	std::cout << "MateriaSource: Copy constructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_slot[i] != NULL)
			{
				delete this->_slot[i];
				this->_slot[i] = obj._slot[i];
			}
		}
	}
	std::cout << "MateriaSource: Coppy assigment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_slot[i] != NULL)
			delete this->_slot[i];
	std::cout << "MateriaSource: Deconstructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *newMateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = newMateria;
			return;
		}
	}
	std::cout << "Slots are full, no room for a NEW Materia" << std::endl;
	delete newMateria;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_slot[i] != NULL && this->_slot[i]->getType() == type)
			return this->_slot[i]->clone();
	return NULL;
}