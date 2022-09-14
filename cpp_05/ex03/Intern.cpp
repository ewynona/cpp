#include "Intern.hpp"

typedef Form* (Intern::*ptrToFunc)(const std::string target) const	;

const std::string Intern::_actions[3] = {
		"Presidential Pardon",
		"Robotomy Request",
		"Shrubbery Creation"
};

Intern::Intern() {
}

Intern::Intern(const Intern &other) {}

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &other) {
	return (*this);
}

Form * Intern::makePresidentialPardonForm(std::string const target) const {
	return (new PresidentialPardonForm(target));
}

Form * Intern::makeShrubberyCreationForm(std::string const target) const {
	return (new ShrubberyCreationForm(target));
}

Form * Intern::makeRobotomyRequestForm(std::string const target) const {
	return (new RobotomyRequestForm(target));
}

Form * Intern::makeForm(std::string formName, std::string target) const {

	ptrToFunc functions[3] = {&Intern::makePresidentialPardonForm,
							  &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	Form *form = nullptr;

	for (int i = 0; i < 3; i++) {
		if (this->_actions[i] == formName) {
			form = (this->*functions[i])(target);
			std::cout << "Intern creates " << *form << std::endl;
			break;
		}
	}
	if (!form) {
		std::cout << "Intern can't create the form" << std::endl;
	}
	return (form);
}
