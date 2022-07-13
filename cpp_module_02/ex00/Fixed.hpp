/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:40:06 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/16 17:59:30 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					val;
	static const int	nbr_of_fract_bits = 8;
	
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif