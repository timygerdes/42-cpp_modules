/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:21:43 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/07 16:04:56 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	std::vector<int>	_intStorage;
	unsigned int		_storageSize;
public:
	Span(unsigned int N);
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	~Span();

	unsigned int	getStorageSize(void);
	void			addNumber(int n);
	void			fillSpan(void);
	void			printSpan(void);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	class SpanFullException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Error: The span is full. You cannot add more numbers";
			}
	};

	class NoSpanException : public std::exception{
		public:
			const char* what() const throw(){
				return "Error: We could not find a span";
			}
	};
};


#endif