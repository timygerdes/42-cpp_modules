/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:38:26 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/04 14:46:45 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	/* data */
	std::string	type;
public:
	Weapon(std::string weapon);
	~Weapon();

	/* Accessors */
	std::string	get_type(void);

	const std::string	&getType() const;
	void				setType(std::string type);
};

#endif