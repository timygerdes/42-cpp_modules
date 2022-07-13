/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:02:16 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/01 16:59:49 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{
	std::cout << "Zombie " << this->name << " was spawned!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " was destroyed!" << std::endl;
}

std::string	Zombie::get_name()
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
