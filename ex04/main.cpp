/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:51:58 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 00:41:02 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#define AC 0
#define FILES 1

void	replace(std::fstream &file, std::string s1, std::string s2, std::string line)
{
	size_t	pos;

	pos = line.find(s1);
	if (pos == std::string::npos)
	{
		file << line;
		return ;
	}
	else
	{
		file << line.substr(0, pos);
		file << s2;
		size_t	skip = s1.length() + pos;
		replace(file, s1, s2, line.substr(skip));
	}
}

void	print_error(int error)
{
	if (error == AC)
		std::cout << "Wrong number of arguments" << std::endl;
	if (error == FILES)
		std::cout << "Error file" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		print_error(AC);
		return (1);
	}

	std::string	name = av[1];
	std::fstream	file;
	file.open (av[1], std::fstream::in);
	if (!file.is_open())
	{
		print_error(FILES);
		return (1);
	}

	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	ret = name + ".replace";
	std::fstream	file_ret;

	file_ret.open(ret.c_str(), std::fstream::out | std::fstream::app);
	if (!file_ret.is_open())
	{
		print_error(FILES);
		return (1);
	}

	std::string	line;
	while (getline(file, line))
		replace(file_ret, s1, s2, line + '\n');
	file.close();
	file_ret.close();
	return (0);
}
