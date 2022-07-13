/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:13:55 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/17 10:34:30 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
	Constructors and Destructors
*/

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false; 
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: Parametric constructor called with name: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false;
}

ScavTrap::ScavTrap(ClapTrap const &src)
{
	std::cout << "ScavTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	if (this != &obj)
	{
		this->_name = std::string(obj._name);
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
		this->_gateKeeperMode = obj._gateKeeperMode;
	}
	return *this;
}

void	ScavTrap::setHitPointsAutomatically()
{
	this->_hitPoints = 100;
}

void	ScavTrap::setEnergyPointsAutomatically()
{
	this->_energyPoints = 100;
}

void	ScavTrap::setAttackDamageAutomatically()
{
	this->_attackDamage = 30;
}

void	ScavTrap::attack(const std::string &target)
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
		std::cout << "ScavTrap " << this->_name << " attacks" << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_attackDamage += amount;
	std::cout << this->_name << " increased the attack damage by: " << amount << "!" << std::endl;
	std::cout << ". The new attack damage is: " << this->_attackDamage << "!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::guardGate()
{
	this->_gateKeeperMode = true;
	std::cout << "The ScavTrap class " << this->_name  << " is now in gate keeper mode!" << std::endl;
}