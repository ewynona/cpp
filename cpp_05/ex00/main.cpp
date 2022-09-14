#include "Bureaucrat.hpp"

int main(void) {

	Bureaucrat joe("Joe", 100);

	std::cout << joe;
	joe.decGrade();
	std::cout << joe;
	joe.incGrade();
	std::cout << joe;

	std::cout << std::endl;
	try {
		Bureaucrat hue("Hue", 160);
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat hue("Hue", 0);
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat robert("Robert	", 150);
		robert.decGrade();
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat hue("Hue", 1);
		hue.incGrade();
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}
	return (0);
}