/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:43:23 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 14:22:49 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern: Destructor called" << std::endl;
}

Intern::Intern(const Intern& obj)
{
	std::cout << "Intern: Copy constructor called" << std::endl;
	*this = obj;
}

Intern	&Intern::operator=(const Intern &obj)
{
	std::cout << "Intern: Copy assignment operator called" << std::endl;
	(void) obj;
	return *this;
}

Form	*Intern::makePresidentialPardonForm(const std::string target)
{
	Form* form = new PresidentialPardonForm(target);
	return form;
}

Form	*Intern::makeRobotomyRequestForm(const std::string target)
{
	Form* form = new RobotomyRequestForm(target);
	return form;
}

Form	*Intern::makeShrubberyCreationForm(const std::string target)
{
	Form* form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::makeForm(std::string form, std::string target)
{
	getFunc		funcName[3] = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	std::string	formName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	bool check = 0;
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (formName[i] == form)
				return (this->*funcName[i])(target);
		}
		if (!check)
			throw Intern::FormNotFoundException();
	}
	catch(Intern::FormNotFoundException &obj)
	{
		std::cout << obj.what() << std::endl;
	}
	return nullptr;
}

void	Intern::deleteForm(Form *form)
{
	if (form != NULL)
		delete form;
}