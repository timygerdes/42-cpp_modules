/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:36:13 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:32 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure : virtual public AMateria
{
public:
	Cure(void);
	~Cure(void);
	Cure(Cure const &obj);
	Cure &operator=(Cure const &obj);

	Cure	*clone() const;
};

#endif