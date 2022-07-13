/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:24:28 by tgerdes           #+#    #+#             */
/*   Updated: 2022/07/07 19:01:10 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	/* Provided tests by subject */
	{
		std::cout << "Provided test by subject" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		
		std::cout << "First value: " << mstack.top() << std::endl;
		
		mstack.pop();
		
		std::cout << "Size: " <<mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	/* Individual tests */
	std::cout << "Individual tests" << std::endl;
	{
		{
			std::cout << "Comparison to list" << std::endl;
			std::list<int> lst;
			lst.push_back(5);
			lst.push_back(17);
			
			std::cout << lst.back() << std::endl;
			
			lst.pop_back();
			
			std::cout << lst.size() << std::endl;
			
			lst.push_back(3);
			lst.push_back(5);
			lst.push_back(737);
			lst.push_back(0);
			
			std::list<int>::iterator it = lst.begin();
			std::list<int>::iterator ite = lst.end();
			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
		}
		{	
			std::cout << "Iterate through stack from front" << std::endl;
			MutantStack<int> mstack;
			mstack.push(5);
			mstack.push(17);
			mstack.push(3);
			mstack.push(62);
			std::cout << "Top value: " << mstack.top() << std::endl;
			MutantStack<int>::iterator it = mstack.begin();
			MutantStack<int>::iterator ite = mstack.end();
			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
		}
		{	
			std::cout << "Iterate through stack from back" << std::endl;
			MutantStack<int> mstack;
			mstack.push(5);
			mstack.push(17);
			mstack.push(3);
			mstack.push(62);
			std::cout << "Top value: " << mstack.top() << std::endl;
			MutantStack<int>::reverse_iterator it = mstack.rbegin();
			MutantStack<int>::reverse_iterator ite = mstack.rend();
			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
		}
	}
	return 0;
}