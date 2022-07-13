/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:50:17 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:20 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_slot[4];
	AMateria	*_floor;

public:
	Character();
	Character(std::string const &name);
	Character(Character const &obj);
	Character &operator=(Character const &obj);
	~Character();

	std::string const	&getName() const;
	virtual void 		equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif