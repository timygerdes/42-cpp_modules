/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:50:41 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/07 16:15:50 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		/* Testing the addNumber to span member function */
		std::cout << "Testing addNumber()" << std::endl;
		Span span1 = Span(5);
		span1.addNumber(7);
		span1.addNumber(14);
		span1.addNumber(21);
		span1.addNumber(28);
		span1.addNumber(35);
		span1.printSpan();
		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;

		/*Testing the copy constructor */
		std::cout << "Testing copy constructor" << std::endl;
		Span span2 = span1;
		span2.printSpan();
		std::cout << span2.shortestSpan() << std::endl;
		std::cout << span2.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		/* Testing the fill span member function */
		std::cout << "Testing fillSpan()" << std::endl;
		Span span3 = Span(7);
		span3.fillSpan();
		span3.printSpan();
		std::cout << span3.shortestSpan() << std::endl;
		std::cout << span3.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		/* Overflow span */
		std::cout << "Testing overflowing span" << std::endl;
		Span span4 = Span(3);
		span4.addNumber(7);
		span4.addNumber(14);
		span4.addNumber(21);
		span4.printSpan();
		span4.addNumber(28);
		std::cout << span4.shortestSpan() << std::endl;
		std::cout << span4.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}