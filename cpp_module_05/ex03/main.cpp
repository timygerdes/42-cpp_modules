/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:17:55 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 14:26:26 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main (void)
{
	Intern	someRandomIntern;
	Form	*rrf;

	Bureaucrat b0000("Johnson Johnson", 33);
	
	Intern mysteriousIntern (someRandomIntern);
	Intern someOtherIntern = someRandomIntern;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;

	b0000.signForm(*rrf);
	b0000.executeForm(*rrf);
	someRandomIntern.deleteForm(rrf);
	return (0);
}