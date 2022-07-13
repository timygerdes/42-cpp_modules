/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:40:48 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/11 14:35:01 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string			levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	privateFuncArrPtrs	funcPtrs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int 				caseNbr;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			caseNbr = i;
			break;
		}
		else
			caseNbr = 5;
	}
	switch (caseNbr + 1)
	{
		case 1: (this->*funcPtrs[0])();
		case 2: (this->*funcPtrs[1])();
		case 3: (this->*funcPtrs[2])();
		case 4: (this->*funcPtrs[3])(); break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}