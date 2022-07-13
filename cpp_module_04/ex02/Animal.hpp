/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:10:33 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:19:44 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &obj);
	virtual ~Animal();
	Animal &operator=(Animal const &obj);

	std::string		getType() const;
	void			setType(std::string type);

	virtual void	makeSound() const = 0;
};



#endif