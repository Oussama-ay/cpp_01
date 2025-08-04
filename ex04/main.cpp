#include <iostream>
#include <fstream>
#include <string>

std::string	replace(std::string &line, std::string &s1, std::string &s2)
{
	std::string	result;

	while (line.find(s1) != std::string::npos)
	{
		result += line.substr(0, line.find(s1));
		result += s2;
		line = line.substr(line.find(s1) + s1.length());
	}
	result += line;
	return (result);
}

int	main(int ac, char **av)
{
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (ac != 4)
	{
		std::cerr << "Usage: " << "file_name s1 s2" << std::endl;
		return (1);
	}
	std::ifstream MyFile(av[1]);
	if (!MyFile.is_open())
	{
		std::cerr << "Error: could not open file " << av[1] << std::endl;
		return (1);
	}
	std::ofstream MyFile_replace((std::string(av[1]) + ".replace").c_str());
	if (!MyFile_replace.is_open())
	{
		MyFile.close();
		std::cerr << "Error: could not create file " << av[1] << ".replace" << std::endl;
		return (1);
	}

	// Read the file line by line and replace all occurrences of s1 with s2
	std::string line;
	while (std::getline(MyFile, line))
		MyFile_replace << replace(line, s1, s2) << "\n";
	MyFile.close();
	MyFile_replace.close();
	return (0);
}
