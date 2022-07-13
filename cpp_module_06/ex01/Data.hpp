/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:47:15 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/04 11:11:12 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define DATA_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <stdint.h>

typedef struct Data {
	int			i;
	std::string	string;
} Data;