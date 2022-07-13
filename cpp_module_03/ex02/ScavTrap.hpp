/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:13:57 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/17 10:33:14 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	_gateKeeperMode;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ClapTrap const &src);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &obj);

	void	getGateKeeperMode() const;
	bool	setGateKeeperMode(bool gateKeeperMode);

	void	attack(const std::string &target);
	void	guardGate();
};

#endif