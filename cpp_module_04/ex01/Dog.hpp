/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:30:23 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:12:50 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_dogBrain;
public:
	Dog(void);
	Dog(std::string type);
	Dog(Dog const &obj);
	~Dog();
	Dog &operator=(Dog const &obj);

	Brain	*getBrain(void) const;
	void	setBrain(Brain *brain);
	
	void	makeSound() const;
};



#endif