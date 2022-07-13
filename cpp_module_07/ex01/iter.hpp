/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:14:41 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/05 12:48:06 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T> void iter(T *arr, size_t arrLen, void (*randomFunc)(T &arrElem))
{
	for (size_t i = 0; i < arrLen; i++)
		(*randomFunc)(arr[i]);
}

template <typename T> void randomFunc(T &arrElem)
{
	std::cout << arrElem << std::endl;
}

#endif