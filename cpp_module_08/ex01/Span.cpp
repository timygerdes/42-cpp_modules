/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:21:46 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/07 16:24:09 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _storageSize(N) {}

Span::Span(const Span &obj): _storageSize(obj._storageSize)
{
	this->_intStorage.clear();
	this->_intStorage.insert(_intStorage.begin(), obj._intStorage.begin(), obj._intStorage.end());
}

Span	&Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->_storageSize = obj._storageSize;
		this->_intStorage.clear();
		this->_intStorage.insert(_intStorage.begin(), obj._intStorage.begin(), obj._intStorage.end());
	}
	return *this;
}

Span::~Span()
{
	this->_intStorage.clear();
}

unsigned int	Span::getStorageSize(void)
{
	return this->_storageSize;
}
	
void	Span::addNumber(int n)
{
	try
	{
		if (this->_intStorage.size() >= this->_storageSize)
			throw Span::SpanFullException();
		this->_intStorage.push_back(n);
	}
	catch(Span::SpanFullException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Span::fillSpan(void)
{
	srand(time(NULL));
	for (unsigned int i = 0; i <= this->_storageSize; i++)
		this->_intStorage.push_back(rand() % 100);
}

void	Span::printSpan(void)
{
	for (std::vector<int>::iterator i = this->_intStorage.begin(); i != this->_intStorage.end(); i++)
		std::cout << "The value is: " << *i << std::endl;
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_intStorage.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int> tmpStorage = this->_intStorage;
	std::sort(tmpStorage.begin(), tmpStorage.end());
	int distance = *max_element(tmpStorage.begin(), tmpStorage.end());
	for (unsigned int i = 0; i < tmpStorage.size() - 1; i++)
		if (abs((tmpStorage[i + 1]) - tmpStorage[i]) < distance)
			distance = abs((tmpStorage[i + 1]) - tmpStorage[i]);
	return (distance);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_intStorage.size() <= 1)
		throw Span::NoSpanException();
	unsigned int minVal = *min_element(this->_intStorage.begin(), this->_intStorage.end());
	unsigned int maxVal = *max_element(this->_intStorage.begin(), this->_intStorage.end());

	return (maxVal - minVal);
}