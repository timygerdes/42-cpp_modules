/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:57:31 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/13 14:37:46 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	/*
		Test with a list container
	*/
	std::cout << "INT LIST TEST" << std::endl;
	std::list<int>	intListType;
	for (int i = 7; i <= 70; i += 7)
		intListType.push_back(i);

	/* Test should find number */
	easyfind(intListType, 42);
	
	/* Test should NOT find number */
	easyfind(intListType, 24);

	/*
		Test with a list container
	*/
	std::cout << "FLOAT LIST TEST" << std::endl;
	std::list<float>	floatListType;
	for (int i = 7.0; i <= 70.0; i += 7.0)
		floatListType.push_back(i);

	/* Test should find number */
	easyfind(floatListType, 42.0);
	
	/* Test should NOT find number */
	easyfind(floatListType, 24.0);

	/*
		Test with a vector container
	*/
	std::cout << "VECTOR TEST" << std::endl;
	std::vector<int>	vectorType;
	for (int i = 7; i <= 70; i += 7)
		vectorType.push_back(i);

	/* Test should find number */
	easyfind(vectorType, 42);
	
	/* Test should NOT find number */
	easyfind(vectorType, 24);

	/*
		Test with a set container
	*/
	std::cout << "SET TEST" << std::endl;
	std::set<int>	setType;
	for (int i = 7; i <= 70; i += 7)
		setType.insert(i);

	/* Test should find number */
	easyfind(setType, 42);
	
	/* Test should NOT find number */
	easyfind(setType, 24);

	/*
		Test with a multiset container
	*/
	std::cout << "MULTISET TEST" << std::endl;
	std::set<int>	multisetType;
	for (int i = 7; i <= 70; i += 7)
		multisetType.insert(i);

	/* Test should find number */
	easyfind(multisetType, 42);
	
	/* Test should NOT find number */
	easyfind(multisetType, 24);
	
	return (0);
}