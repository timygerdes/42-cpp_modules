/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:23:39 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:12:11 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_catBrain;

public:
	Cat(void);
	Cat(std::string type);
	Cat(Cat const &obj);
	~Cat();
	Cat &operator=(Cat const &obj);

	Brain	*getBrain(void) const;
	void	setBrain(Brain *brain);
	
	void	makeSound() const;
};



#endif