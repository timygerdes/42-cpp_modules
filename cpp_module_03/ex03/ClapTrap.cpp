/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:31:46 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/17 10:39:50 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
	Constructors and Destructors
*/

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap: Parametric constructor called with name: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	if (this != &obj)
	{
		this->_name = std::string(obj._name);
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

/*
	Accessors (getter and setter)
*/
std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

int			ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

void		ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

int			ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

void		ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

int			ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void		ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

/*
	Public member functions
*/
void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "The enemy you try to attack is already dead." << std::endl;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout << "You don't have enough energy to attack!" << std::endl;
	}
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks" << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << this->_name << " got hit and lost: " << amount << " of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints < 1)
		std::cout << "You don't have enough energy for the repair!" << std::endl;
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << this->_name << " was repaired!" << std::endl;	
	}
}
