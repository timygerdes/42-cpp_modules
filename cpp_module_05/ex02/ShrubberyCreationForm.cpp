/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:16:49 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 13:41:17 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137), _target("Form28B")
{
	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: Parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(), _target(obj._target)
{
	std::cout << "ShrubberyCreationForm: Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm: Copy assignment operator called" << std::endl;
	this->_target = obj._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsFormSignedBool() == false)
		throw Form::FormNotSignedException();
	else if (this->getReqExeGrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	
	std::string	fileName = this->getTarget() + "_shrubbery";
	std::ofstream outfile(fileName);
	outfile << "                    |   |" << std::endl;
	outfile << "                    |   |" << std::endl;
	outfile << "                    |   |" << std::endl;
	outfile << "                    |   |" << std::endl;
	outfile << "                    |   |" << std::endl;
	outfile << "                 ___|   |___" << std::endl;
	outfile << "             ___|   |   |   |___" << std::endl;
	outfile << "            |   =[@]=   |   |   |" << std::endl;
	outfile << "            |   |   |   |   |   |" << std::endl;
	outfile << "            | ~   ~   ~   ~ |`  |" << std::endl;
	outfile << "            |                   |" << std::endl;
	outfile << "             |                 |" << std::endl;
	outfile << "              |               |" << std::endl;
	outfile << "               |    _____    |" << std::endl;
	outfile << "                |           |" << std::endl;
	outfile << "                |           |" << std::endl;
	outfile << "                |           |" << std::endl;
	outfile << "-Tim YouShouldPayMeMore-" << std::endl;
	outfile.close();
}