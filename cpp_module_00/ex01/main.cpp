/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 02:10:33 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/02 01:31:00 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	std::string cmd;
	int			index;
	int			is_running = 1;

	phone_book.show_welcome_msg();
	while (is_running == 1)
	{
		std::cout << "Please type in your command: ";
		getline(std::cin, cmd);
		if (cmd == "ADD")
			phone_book.add_contact();
		else if (cmd == "SEARCH")
			phone_book.search_contact();
		else if (cmd == "EXIT")
		{
			std::cout << "Goodbye and see you next time" << std::endl;
			is_running = 0;
		}
	}
	return (0);
}
