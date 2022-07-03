#include <iostream>
#include <fstream>
#define AC 0
#define IN 1
#define OUT 2

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
	if (error == IN)
		std::cout << "Error file in" << std::endl;
	if (error == OUT)
		std::cout << "Error file out" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 4)
		print_error(AC);

	std::string	name = av[1];
	std::fstream	file;
	file.open (av[1], std::fstream::in);
	if (!file)
		print_error(IN);

	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	ret = name + ".replace";
	std::fstream	file_ret;

	file_ret.open(ret, std::fstream::out | std::fstream::app);
	if (!file_ret)
		print_error(OUT);

	std::string	line;
	while (getline(file, line))
		replace(file_ret, s1, s2, line + '\n');
	file.close();
	file_ret.close();
	return (0);
}
