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

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->nbr_of_contacts = 0;
	this->oldest_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::show_welcome_msg(void)
{
	std::cout << "Welcome to Tims FriendBook. What would you like to do?" << std::endl;
	std::cout << "Use the command ADD to add a new contact to Tims FriendBook or" << std::endl;
	std::cout << "Use the command SEARCH to search for a contact in Tims FriendBook or" << std::endl;
	std::cout << "Use the command EXIT to exit Tims Friendbook. But be aware that all contacts will get lost." << std::endl;
}

void	PhoneBook::add_contact(void)
{
	if (this->nbr_of_contacts == 8)
	{
		this->contacts[this->oldest_index].fill_details(this->oldest_index);
		if (this->oldest_index < 7)
			this->oldest_index++;
		else
			this->oldest_index = 0;
	}
	else if (this->contacts[nbr_of_contacts].fill_details(nbr_of_contacts))
		this->nbr_of_contacts += 1;
}

void	PhoneBook::show_search_msg(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->nbr_of_contacts; i++)
		this->contacts[i].display_list();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::search_contact(void)
{
	int index;

	if (this->nbr_of_contacts == 0)
		std::cout << "The PhoneBook is empty! Please add a contact before searching" << std::endl;
	else
	{
		this->show_search_msg();
		std::cout << "Enter the index of the contacts you want the details from" << std::endl;
		while (!(std::cin >> index) || (index < 0 || index > this->nbr_of_contacts - 1))
		{
			std::cin.clear();
			std::cout << "No contact found for your input. Please try again." << std::endl;
		}
		std::cin.ignore(256, '\n');
		this->contacts[index].display_contact();
	}
}

int		PhoneBook::get_nbr_of_contacts()
{
	return (this->nbr_of_contacts);
}

int		PhoneBook::get_oldest_index()
{
	return (this->oldest_index);
}

Contact	*PhoneBook::get_contact()
{
	return (this->contacts);
}