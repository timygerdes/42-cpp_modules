/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 10:37:27 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:22:43 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : virtual public AMateria
{
public:
	Ice(void);
	~Ice(void);
	Ice(Ice const &obj);
	Ice &operator=(Ice const &obj);

	Ice	*clone() const;
};

#endif