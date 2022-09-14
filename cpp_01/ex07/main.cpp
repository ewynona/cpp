#include <iostream>
#include <fstream>
#include <string>

int	ft_sed(std::ifstream &inf, std::ofstream &outf, std::string s1, std::string s2)
{
	std::string line;
	size_t		pos = 0;

	while (getline(inf, line)) {
		pos = 0;
		while (true) {
			pos = line.find(s1, pos);
			if (pos != std::string::npos) {
				line.replace(pos, s1.length(), s2);
				pos += s1.length();
			} else {
				break ;
			}
		}
		outf << line + "\n";
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 4) {
		std::string		file = av[1];
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::ifstream	inf(file);
		std::ofstream	outf;

		if (s1.empty() || s2.empty() || file.empty()) {
			std::cerr << "Error: one or more strings are empty" << std::endl;
			return (1);
		}
		if (!inf) {
			std::cerr << "Error: " << file << " couldn't be opened" << std::endl;
			return (1);
		}
		outf.open(file + ".replace");
		ft_sed(inf, outf, s1, s2);
		inf.close();
		outf.close();
	} else {
		std::cout << "Invalid number of arguments" << std::endl;
	}

	return (0);
}