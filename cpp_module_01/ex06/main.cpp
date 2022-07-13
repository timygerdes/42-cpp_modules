/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:49:44 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/11 14:33:57 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Error! Wrong number of arguments!" << std::endl;
		return (-1);
	}
	std::string message = argv[1];
	if (message.length() == 0)
	{
		std::cout << "Error! No command provided!" << std::endl;
		return (-1);
	}
	harl.complain(message);
	return 0;
}