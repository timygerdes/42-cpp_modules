/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:12:16 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:21:58 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &obj);
	virtual ~AMateria(void);
	AMateria &operator=(AMateria const &obj);
	
	std::string const	&getType() const;
	void				setType(std::string type);
	
	virtual AMateria*	clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif