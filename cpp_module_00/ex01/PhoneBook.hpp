/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:59:15 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/02 00:49:37 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		nbr_of_contacts;
	int		oldest_index;
public:
	PhoneBook(/* args */);
	~PhoneBook();

	void	show_welcome_msg(void);
	void	add_contact(void);
	void	show_search_msg(void);
	void	search_contact(void);

	Contact	*get_contact(void);
	int		get_nbr_of_contacts(void);
	int		get_oldest_index(void);
};

#endif