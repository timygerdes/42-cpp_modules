/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:49:44 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/11 14:19:08 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::ifstream	srcFile;
	std::ofstream	dstFile("dstFile.txt");
	std::string		s1;
	std::string		s2;
	std::string		line;
	std::size_t		s1Pos;
	
	if (argc != 4)
	{
		std::cout << "Error. Wrong number of arguments!" << std::endl;
		return (-1);
	}
	s1 = argv[2];
	if (s1.length() == 0)
	{
		std::cout << "Error. The strings cannot be empty!" << std::endl;
		return (-1);
	}
	s2 = argv[3];
	srcFile.open(argv[1]);
	if (!srcFile.good())
	{
		std::cout << "Error. Something is wrong with the file!" << std::endl;
		return (-1);
	}
	while (getline(srcFile, line))
	{
		while ((s1Pos = line.find(s1)) != std::string::npos)
		{
			line.erase(s1Pos, s1.length());
			line.insert(s1Pos, s2);
		}
		dstFile << line << std::endl;
	}
	srcFile.close();
	dstFile.close();
	return 0;
}