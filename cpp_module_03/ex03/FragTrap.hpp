/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:42:19 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/17 10:34:16 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	void	setHitPointsAutomatically();
	void	setEnergyPointsAutomatically();
	void	setAttackDamageAutomatically();
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(ClapTrap const &src);
	~FragTrap();
	FragTrap &operator=(FragTrap const &obj);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys();
};

#endif