/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:54:03 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/19 14:49:38 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
	Constructors and Destructors
*/

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->_name = "";
	this->ClapTrap::_name = "_clap_trap";
	this->FragTrap::setHitPointsAutomatically();
	this->ScavTrap::setEnergyPointsAutomatically();
	this->FragTrap::setAttackDamageAutomatically();
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap: Parametric constructor called with name: " << name << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_trap";
	this->FragTrap::setHitPointsAutomatically();
	this->ScavTrap::setEnergyPointsAutomatically();
	this->FragTrap::setAttackDamageAutomatically();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	if (this != &obj)
	{
		this->_name = std::string(obj._name);
		this->FragTrap::setHitPoints(obj.FragTrap::getHitPoints());
		this->ScavTrap::setEnergyPoints(obj.ScavTrap::getEnergyPoints());
		this->FragTrap::setAttackDamage(obj.FragTrap::getAttackDamage());
	}
	return *this;
}

void	DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	this->FragTrap::setAttackDamage(this->FragTrap::getAttackDamage() + amount);
	std::cout << this->_name << " increased the attack damage by: " << amount << "!" << std::endl;
	std::cout << ". The new attack damage is: " << this->FragTrap::getAttackDamage() << "!" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->ScavTrap::getEnergyPoints() < 1)
		std::cout << "You don't have enough energy for the repair!" << std::endl;
	else
	{
		this->FragTrap::setHitPoints(this->FragTrap::getHitPoints() + amount);
		this->ScavTrap::setEnergyPoints(this->ScavTrap::getEnergyPoints() - 1);
		std::cout << this->_name << " was repaired!" << std::endl;	
	}
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "ClapTrap name is: " << this->FragTrap::getName() << std::endl;
}