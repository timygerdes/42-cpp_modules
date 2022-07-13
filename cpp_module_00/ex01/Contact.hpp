/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:00:51 by tgerdes           #+#    #+#             */
/*   Updated: 2022/03/02 18:20:26 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	int			index;
	std::string	phone_number,
				first_name,
				last_name,
				nickname,
				darkest_secret;
public:
	Contact(/* args */);
	~Contact();

	void		display_list(void);
	void		display_contact(void);
	int			fill_details(int index);

	int			get_index(void);
	std::string	get_phone_number(void);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_darkest_secret(void);
};

#endif