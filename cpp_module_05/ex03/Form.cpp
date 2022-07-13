/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:58:15 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 09:09:47 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("FormA1"), _isFormSigned(false), _reqSigGrade(20), _reqExeGrade(50)
{
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(const std::string name, const unsigned int reqSigGrade, const unsigned int reqExeGrade) : _name(name), _isFormSigned(false), _reqSigGrade(reqSigGrade), _reqExeGrade(reqExeGrade)
{
	try
	{
		if (this->_reqSigGrade > 150 || this->_reqExeGrade > 150)
			throw Form::GradeTooLowException();
		else if (this->_reqSigGrade < 1 || this->_reqExeGrade < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception &obj)
	{
		std::cout << obj.what() << std::endl;
	}
	
	std::cout << "Form: Parametric constructor called" << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name), _reqSigGrade(obj._reqSigGrade), _reqExeGrade(obj._reqExeGrade)
{
	try
	{
		if (this->_reqSigGrade > 150 || this->_reqExeGrade > 150)
			throw Form::GradeTooLowException();
		else if (this->_reqSigGrade < 1 || this->_reqExeGrade < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception &obj)
	{
		std::cout << obj.what() << std::endl;
	}
	this->_isFormSigned = obj._isFormSigned;
	std::cout << "Copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_isFormSigned = obj._isFormSigned;
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

const std::string	Form::getName() const
{
	return this->_name;
}

bool	Form::getIsFormSignedBool() const
{
	return this->_isFormSigned;
}

unsigned int	Form::getReqSigGrade() const
{
	return this->_reqSigGrade;
}

unsigned int	Form::getReqExeGrade() const
{
	return this->_reqExeGrade;	
}

void	Form::beSigned(const Bureaucrat &obj)
{
	try
	{
		if (obj.getGrade() > this->getReqSigGrade())
			throw Form::GradeTooLowException();
		this->_isFormSigned = true;
	}
	catch (Form::GradeTooLowException &obj)
	{
		std::cout << obj.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, const Form &obj)
{
	std::string signStatus;
	
	if (obj.getIsFormSignedBool() == true)
		signStatus = "Form signed";
	else
		signStatus = "Form not signed";
	return (os << "Form " << obj.getName() << ", Status: " << signStatus << std::endl << "The minimum grade to sign is: " << obj.getReqSigGrade() << " and the minimum grade to execute is: " << obj.getReqExeGrade() <<  std::endl);
}
