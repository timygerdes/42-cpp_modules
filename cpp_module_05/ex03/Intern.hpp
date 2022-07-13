/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:43:30 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 14:23:59 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
	Form	*makePresidentialPardonForm(const std::string target);
	Form	*makeRobotomyRequestForm(const std::string target);
	Form	*makeShrubberyCreationForm(const std::string target);
public:
	Intern();
	Intern(const Intern &obj);
	Intern &operator=(const Intern &obj);
	~Intern();

	Form			*makeForm(std::string formName, const std::string target);
	typedef Form	*(Intern::*getFunc)(const std::string);
	void			deleteForm(Form *form);

	class FormNotFoundException : public std::exception{
		public:
			const char* what() const throw()
			{
				return "Error: This form doesn't exist.";
			}
	};
};


#endif