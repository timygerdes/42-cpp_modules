/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:54:09 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/16 13:30:14 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap fighter("DiamondFighter");
	fighter.attack("Bar");
	fighter.beRepaired(20);
	fighter.highFivesGuys();
	fighter.guardGate();
	fighter.whoAmI();

	DiamondTrap ct_obj1("Jerry");
	DiamondTrap ct_obj2("Tom");

	std::cout << "Jerry has " << ct_obj1.getAttackDamage() << " attack damage!" << std::endl;
	std::cout << "Tom has " << ct_obj2.getAttackDamage() << " attack damage!" << std::endl;
	ct_obj1.attack("Tom");
	ct_obj2.takeDamage(ct_obj1.getAttackDamage());
	std::cout << "Jerry has " << ct_obj2.getHitPoints() << " hit points left!" << std::endl; 
	ct_obj2.attack("Jerry");
	ct_obj1.takeDamage(ct_obj2.getAttackDamage());
	std::cout << "Tom has " << ct_obj1.getHitPoints() << " hit points left!" << std::endl;
	ct_obj1.setAttackDamage(150);
	ct_obj2.setAttackDamage(200);
	std::cout << "Jerry has " << ct_obj1.getAttackDamage() << " attack damage!" << std::endl;
	std::cout << "Tom has " << ct_obj2.getAttackDamage() << " attack damage!" << std::endl;
	ct_obj1.attack("Tom");
	ct_obj2.takeDamage(ct_obj1.getAttackDamage());
	std::cout << "Jerry has " << ct_obj2.getHitPoints() << " hit points left!" << std::endl;
	ct_obj2.attack("Jerry");
	ct_obj1.takeDamage(ct_obj2.getAttackDamage());
	std::cout << "Tom has " << ct_obj1.getHitPoints() << " hit points left!" << std::endl;
	
	return 0;
}