/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:15:33 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/02 18:23:18 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::display_list(void)
{
	std::cout << "|";
	std::cout << std::setw(10) << this->index;
	std::cout << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->first_name;
	std::cout << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->last_name;
	std::cout << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
}

void	Contact::display_contact(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

int		Contact::fill_details(int index)
{
	this->index = index;
	std::cout << "Please type in the first name." << std::endl;
	this->first_name.erase(0, this->first_name.length());
	while (this->first_name.length() == 0)
	{
		getline(std::cin, this->first_name);
		if (this->first_name.length() == 0)
			std::cout << "This field cannot be empty." << std::endl;
	}
	std::cout << "Please type in the last name." << std::endl;
	this->last_name.erase(0, this->last_name.length());
	while (this->last_name.length() == 0)
	{
		getline(std::cin, this->last_name);
		if (this->last_name.length() == 0)
			std::cout << "This field cannot be empty." << std::endl;
	}
	std::cout << "Please type in the nickname." << std::endl;
	this->nickname.erase(0, this->nickname.length());
	while (this->nickname.length() == 0)
	{
		getline(std::cin, this->nickname);
		if (this->nickname.length() == 0)
			std::cout << "This field cannot be empty." << std::endl;
	}
	std::cout << "Please type in the phone number." << std::endl;
	this->phone_number.erase(0, this->phone_number.length());
	while (this->phone_number.length() == 0)
	{
		getline(std::cin, this->phone_number);
		if (this->phone_number.length() == 0)
			std::cout << "This field cannot be empty." << std::endl;
	}
	std::cout << "Please type in the darkest secret." << std::endl;
	this->darkest_secret.erase(0, this->darkest_secret.length());
	while (this->darkest_secret.length() == 0)
	{
		getline(std::cin, this->darkest_secret);
		if (this->darkest_secret.length() == 0)
			std::cout << "This field cannot be empty." << std::endl;
	}
	std::cout << "Contact was added!" << std::endl;
	std::cout << "What else can I do for you?" << std::endl;
	return (1);
}

int	Contact::get_index(void)
{
	return (this->index);
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}
	
std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
