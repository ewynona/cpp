#include "Bureaucrat.hpp"

int main(void) {

	Bureaucrat	joe("Joe", 1);
	Bureaucrat	jon("Jon", 12);
	Form		form("Form", 1, 102);

	std::cout << joe << std::endl;
	joe.decGrade();
	std::cout << joe << std::endl;
	joe.incGrade();
	std::cout << joe << std::endl;

	std::cout << "______________________________________________" << std::endl;
	try {
		jon.signForm(form);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}
	std::cout << "______________________________________________" << std::endl;
	try {
		joe.signForm(form);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}
	std::cout << "______________________________________________" << std::endl;
	try {
		joe.signForm(form);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}
	std::cout << "______________________________________________" << std::endl;
	try {
		Bureaucrat hue("Hue", 160);
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "______________________________________________" << std::endl;
	try {
		Bureaucrat hue("Hue", 0);
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "______________________________________________" << std::endl;

	try {
		Bureaucrat robert("Robert	", 150);
		robert.decGrade();
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "______________________________________________" << std::endl;

	try {
		Bureaucrat hue("Hue", 1);
		hue.incGrade();
	}
	catch (std::exception const &exception) {
		std::cerr << exception.what() << std::endl;
	}



	return (0);
}