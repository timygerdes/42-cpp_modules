/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:54:56 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/03 23:15:48 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	/* data */
	Weapon		*weapon;
	std::string	name;
public:
	HumanB(std::string name);
	~HumanB();

	/* Accessors */
	Weapon		get_weapon(void);
	std::string	get_name(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif