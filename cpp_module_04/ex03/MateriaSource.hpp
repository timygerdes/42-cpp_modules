/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:20:13 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:24:14 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_slot[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &obj);
	MateriaSource &operator=(MateriaSource const &obj);
	~MateriaSource();

	void		learnMateria(AMateria *);
	AMateria	*createMateria(std::string const &type);
};

#endif