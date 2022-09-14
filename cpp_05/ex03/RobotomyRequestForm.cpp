#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form("Robotomy Request", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {
	this->_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	this->_target = other._target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "* VZZZZZZZ *" << std::endl;
	if (rand() % 100 >= 50) {
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << this->_target << " robotomized is failure" << std::endl;
	}
}