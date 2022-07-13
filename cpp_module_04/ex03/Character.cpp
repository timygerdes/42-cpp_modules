/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:24:05 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:26 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "RandomCharacter";
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	this->_floor = NULL;
	std::cout << "Character: Default constructor called" << std::endl;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	this->_floor = NULL;
	std::cout << "Character: Parametric constructor called" << std::endl;
}

Character::Character(Character const &obj)
{
	*this = obj;
}

Character &Character::operator=(Character const &obj)
{
	if (this != &obj) {
		this->_name = obj.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_slot[i] != NULL)
				delete this->_slot[i];
			if (obj._slot[i] != NULL)
				this->_slot[i] = obj._slot[i]->clone();
			else
				this->_slot[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_slot[i] != NULL)
			delete this->_slot[i];
	if (this->_floor != NULL)
		delete this->_floor;
}

std::string const	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = m;
			std::cout << "Equiped with "<< m->getType() << " on the " << i << " position" << std::endl;
			return ;
		}
	}
	std::cout << "The slots are full, no equip possible" << std::endl;
	if (this->_floor != NULL){
		delete this->_floor;
	}
	this->_floor = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "The index is not valid, can not unequip" << std::endl;
		return ;
	}
	if (this->_slot[idx] == NULL)
	{
		std::cout << "The materia does not exist, can not unequip" << std::endl;
		return ;
	}
	std::cout << "Unequiped the " << idx << " slot"  << std::endl;
	if (this->_floor != NULL)
		delete this->_floor;
	this->_floor = this->_slot[idx];
	this->_slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "The index is not valid" << std::endl;
		return ;
	}
	if (this->_slot[idx] == NULL)
	{
		std::cout << "No use possible" << std::endl;
		return ;
	}
	this->_slot[idx]->use(target);
}