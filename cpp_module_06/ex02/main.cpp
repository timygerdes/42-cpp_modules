/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:38:32 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/04 11:29:15 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Base::~Base()
{
	std::cout << "Base: Destructor called" << std::endl;
}

Base	*generate(void)
{
	srand(time(NULL));
	int randomNumber = rand() % 3;

	switch (randomNumber)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	Base	tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast &e) {}
	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast &e) {}
	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast &e) {}
}

int main()
{
	Base *pointer = generate();
	identify(pointer);
	identify(*pointer); 

	delete pointer;
	return 0;
}