/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:35:06 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/04 11:28:03 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>

class Base
{
public:
	virtual ~Base(void);
};

class A : public Base {};

class B : public Base {};

class C : public Base {};


#endif