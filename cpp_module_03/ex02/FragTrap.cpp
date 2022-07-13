/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:42:17 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/17 10:32:51 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
	Constructors and Destructors
*/

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap: Parametric constructor called with name: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(ClapTrap const &src)
{
	std::cout << "FragTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
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

void	FragTrap::attack(const std::string &target)
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
		std::cout << "FragTrap " << this->_name << " attacks" << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High Five was given!" << std::endl;
}