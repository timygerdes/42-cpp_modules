/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:17:50 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 11:51:58 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("B_Willy"), _grade(100)
{
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat: Parametric constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->_grade = obj.getGrade();
		std::cout << "Bureaucrat: Copy assignment operator called" << std::endl;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: Destructor called" << std::endl;
}

const std::string	Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade -= 1;
	}
	catch(Bureaucrat::GradeTooHighException&e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 1;
	}
	
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade += 1;
	}
	catch(Bureaucrat::GradeTooLowException&e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 150;
	}
}

void	Bureaucrat::signForm(const Form &obj)
{
	if (obj.getIsFormSignedBool() == true)
		std::cout << this->_name << " signed " << obj.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << obj.getName() << " because the pen broke" << std::endl;
}

void	Bureaucrat::executeForm(Form const &form){
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(Form::FormNotSignedException & e){
		std::cout << e.what() << ", Speak to the manager" << std::endl;
	}
	catch(Form::GradeTooLowException & e){
		std::cout << "Rejected execution: " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	return (os << obj.getName() + ", bureaucrat grade " << obj.getGrade() << std::endl);
}