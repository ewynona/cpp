#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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


	Intern someRandomIntern;
	Form* form4;
	form4 = someRandomIntern.makeForm("Robotomy Request", "Bender");


	try {
		jon.signForm(*form4);
		jon.executeForm(*form4);
	}
	catch (std::exception const &exc) {
		std::cout << exc.what() << std::endl;
	}

	Form* form5;
	form5 = someRandomIntern.makeForm("three", "Bender");


	return (0);
}