/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:10:33 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/03 21:37:56 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*zombie1 = newZombie("Bephanie");
	zombie1->announce();
	delete(zombie1);
	Zombie	*zombie2 = newZombie("Evangelos");
	zombie2->announce();
	delete(zombie2);
	Zombie zombie3("Kostas");
	zombie3.announce();
	randomChump("Dracula");
	return (0);
}
