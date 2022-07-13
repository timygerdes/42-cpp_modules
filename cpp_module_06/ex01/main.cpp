/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:47:01 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/04 11:08:29 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{

	Data *data = new Data();
	data->i = 9;
	data->string = "Pablo";

	uintptr_t t;
	std::cout << "data.int: "<< data->i << std::endl;
	std::cout << "data.string: " << data->string << std::endl;
	std::cout << "data address: " << data << std::endl;
	t = serialize(data);
	delete data;
	Data *data2;
	data2 = deserialize(t);
	std::cout << "data2.int: " << data2->i << std::endl;
	std::cout << "data2.string: " << data2->string << std::endl;
	std::cout << "data2 address: " << data2 << std::endl;

	return 0;
}