/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:16:29 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 13:41:35 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45), _target("Form28P")
{
	std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: Parametric constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(), _target(obj._target)
{
	std::cout << "RobotomyRequestForm: Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm: Copy assignment operator called" << std::endl;
	this->_target = obj._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsFormSignedBool() == false)
		throw Form::FormNotSignedException();
	if (this->getReqExeGrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	srand(time(NULL));
	if ((rand() % 2) == 0)
		std::cout << "Robotomy failed" << std::endl;
	else
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
}