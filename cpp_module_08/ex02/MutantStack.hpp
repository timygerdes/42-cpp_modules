/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:24:45 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/12 21:08:18 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T> &obj);
	MutantStack &operator=(const MutantStack<T> &obj);
	virtual ~MutantStack();

	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator begin(void)
	{
		return this->c.begin();
	}
	
	iterator end(void)
	{
		return this->c.end();
	}

	const_iterator begin() const
	{
		return this->c.begin();
	}
	
	const_iterator end() const
	{
		return this->c.end();
	}

	reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}
	
	reverse_iterator rend()
	{
		return this->c.rend();
	}

	const_reverse_iterator rbegin() const
	{
		return this->c.rbegin();
	}
	
	const_reverse_iterator rend() const
	{
		return this->c.rend();
	}
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &obj)
{
	*this = obj;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &obj)
{
	if (this != &obj)
		this->c = obj.c;
	return *this;
}

#endif