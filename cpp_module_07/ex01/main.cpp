/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 13:20:02 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/01 13:23:51 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
	std::cout << "Integer type array test" << std::endl;
	int intArray[] = {1, 5, 7, 2, 4, 10};
	::iter(intArray, sizeof(intArray)/sizeof(intArray[0]), &randomFunc); std::cout << std::endl;

	std::cout << "Float type array test" << std::endl;
	float floatArray[] = {1.5, 5.2, 7.9, 2.1, 4.44, 10.3};
	::iter(floatArray, sizeof(floatArray)/sizeof(floatArray[0]), &randomFunc); std::cout << std::endl;

	std::cout << "Char type array test" << std::endl;
	char charArray[] = {'a', 'F', '*'};
	::iter(charArray, sizeof(charArray)/sizeof(charArray[0]), &randomFunc); std::cout << std::endl;

	std::cout << "String type array test" << std::endl;
	std::string stringArray[] = {"Hi", "hey", "bye"};
	::iter(stringArray, sizeof(stringArray)/sizeof(stringArray[0]), &randomFunc); std::cout << std::endl;
}