/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:42:20 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/03 23:14:32 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	/* data */
	Weapon		&weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	/* Accessors */
	Weapon		get_weapon(void);
	std::string	get_name(void);

	void	attack(void);
};

#endif