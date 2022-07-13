/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:09:21 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/10 16:39:36 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}

	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	
	for (int i = 0; i < 10; i++)
		delete animals[i];
	
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	delete dog;
	delete cat;
	
	return 0;
}