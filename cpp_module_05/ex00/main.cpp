/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:17:55 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/28 09:12:57 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat a;
		std::cout << a;
		a.incrementGrade();
		std::cout << a;
		std::cout << std::endl;
		Bureaucrat b("James", 100);
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(std::exception & e)
	{
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		Bureaucrat a("James", 0);
		std::cout << a;
		a.decrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		Bureaucrat a("James", 151);
		std::cout << a;
		a.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	return 0;
}