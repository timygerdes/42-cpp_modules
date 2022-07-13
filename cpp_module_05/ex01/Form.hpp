/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:58:18 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 09:03:47 by tgerdes          ###   ########.fr       */
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
	~Form();

	const std::string	getName() const;
	bool				getIsFormSignedBool() const;
	unsigned int	getReqSigGrade() const;
	unsigned int	getReqExeGrade() const;

	void				beSigned(const Bureaucrat &obj);

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
};

std::ostream	&operator<<(std::ostream &os, const Form &obj);

#endif