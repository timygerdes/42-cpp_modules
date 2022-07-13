/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:58:18 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 13:39:36 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isFormSigned;
	const unsigned int	_reqSigGrade;
	const unsigned int	_reqExeGrade;
	
public:
	Form();
	Form(const std::string name, const unsigned int _reqSigGrade, const unsigned int _reqExeGrade);
	Form(const Form &obj);
	Form &operator=(const Form &obj);
	virtual ~Form();

	virtual const std::string	getName() const;
	virtual bool				getIsFormSignedBool() const;
	virtual unsigned int		getReqSigGrade() const;
	virtual unsigned int		getReqExeGrade() const;

	virtual void				beSigned(const Bureaucrat &obj);
	virtual void				execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Error: The grade is too high!";
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Error: The grade is too low!";
			}
	};
	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Error: Form is not signed";
			}
	};
};

std::ostream	&operator<<(std::ostream &os, const Form &obj);

#endif