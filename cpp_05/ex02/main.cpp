#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

	Bureaucrat	joe("Joe", 1);
	Bureaucrat	jon("Jon", 12);
	Form		*form1 = new PresidentialPardonForm("Form");
	Form		*form2 = new ShrubberyCreationForm("three");
	Form		*form3 = new ShrubberyCreationForm("error");

	std::cout << joe << std::endl;
	joe.decGrade();
	std::cout << joe << std::endl;
	joe.incGrade();
	std::cout << joe << std::endl;

	std::cout << "______________________________________________" << std::endl;
	try {
		jon.signForm(*form1);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}
	try {
		jon.signForm(*form2);
		jon.executeForm(*form2);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}
	try {
		jon.signForm(*form3);
		jon.executeForm(*form3);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}




	return (0);
}