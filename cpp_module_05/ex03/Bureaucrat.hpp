/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:17:53 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 11:46:46 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	
private:
	const std::string	_name;
	unsigned int		_grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &obj);
	~Bureaucrat();

	const std::string	getName() const;
	unsigned int		getGrade() const;	

	void				incrementGrade(void);
	void				decrementGrade(void);
	void				signForm(const Form &obj);
	void				executeForm(Form const &form);

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

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj);

#endif