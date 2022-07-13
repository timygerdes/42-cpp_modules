/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:39:38 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/03 23:12:33 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}

Weapon::~Weapon()
{
	return ;
}

std::string	Weapon::get_type(void)
{
	return (this->type);
}

const std::string	&Weapon::getType(void) const
{
	std::string const &typeREF = this->type;
	return (typeREF);
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}