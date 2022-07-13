/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:21:51 by tgerdes           #+#    #+#             */
/*   Updated: 2022/06/27 11:20:23 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(Brain const &obj);
	virtual ~Brain();
	Brain &operator=(Brain const &obj);

	std::string	getIdeaByIndex(size_t index) const;
	void		setIdeaByIndex(size_t index, std::string idea);
};


#endif