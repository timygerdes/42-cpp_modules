/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:34:07 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/05 12:49:38 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

template <typename T> class Array
{
private:
	unsigned int	_size;
	T				*_array;

public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> &obj);
	Array &operator=(const Array<T> &obj);
	virtual ~Array();

	T &operator[](unsigned int i);
	unsigned int	size();

	class OutOfBoundsException: public std::exception
	{
		public:
			const char	*what() const throw()
			{
				return "Error: Index out of bounds!";
			}
	};
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T> &obj): _size(obj._size)
{
	if (obj._size > 0)
	{
		this->_array = new T[obj._size]();
		for(unsigned int i = 0; i < obj._size; i++)
			this->_array[i] = obj._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	this->_size = obj.size;
	this->_array = NULL;
	if (obj._size > 0)
	{
		this->_array = new T[obj._size]();
		for(unsigned int i = 0; i < obj._size; i++)
			this->_array[i] = obj._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete[] this->_array;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw Array::OutOfBoundsException();
	return this->_array[i];
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return this->_size;
}

#endif