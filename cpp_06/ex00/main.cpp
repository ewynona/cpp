#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "converter.hpp"

int main(int ac, char **av) {

	if (ac == 2) {
		Converter conv(av[1]);
		conv.typeInit();
		if (conv.getType() == ERROR) {
			std::cout << "No conversion available" << std::endl;
		} else {
			conv.varInit();
			conv.printInt();
			conv.printChar();
			conv.printFloat();
			conv.printDouble();
		}
	} else if (ac == 1) {
		std::cerr << "Error: Not enough arguments" << std::endl;
	} else {
		std::cerr << "Error: Too many arguments" << std::endl;
	}
	return (0);
}