/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:22:35 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/13 14:31:10 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

template <typename T>
void	easyfind(T &cont, int n)
{
	int counter = 0;
	for (typename T::iterator iter = cont.begin(); iter != cont.end(); iter++)
	{
		if (*iter == n)
		{
			std::cout << "Found number: " << n << std::endl;
			std::cout <<  "At index: " << counter << std::endl;
			return ;	
		}
		counter++;
	}
	std::cout << "Number " << n << " was not found" << std::endl;
}

#endif