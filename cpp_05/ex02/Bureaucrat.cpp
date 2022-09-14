#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) {
	this->_minGrade = 150;
	this->_maxGrade = 1;
	if (grade > this->_minGrade) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < this->_maxGrade) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	this->_maxGrade = other._grade;
	this->_minGrade = other._minGrade;
	if (other._grade > this->_minGrade) {
		throw Bureaucrat::GradeTooLowException();
	} else if (other._grade < this->_maxGrade) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_name = other._name;
	this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return (*this);
	this->_maxGrade = other._maxGrade;
	this->_minGrade = other._minGrade;
	if (other._grade > this->_minGrade) {
		throw Bureaucrat::GradeTooLowException();
	} else if (other._grade < this->_maxGrade) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_name = other._name;
	this->_grade = other._grade;

	return (*this);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

void Bureaucrat::incGrade() {
	if ((this->_grade - 1) < this->_maxGrade) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}

void Bureaucrat::decGrade() {
	if ((this->_grade + 1) > this->_minGrade) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade++;
}

void Bureaucrat::signForm(Form &form) {
	if (this->_grade > form.getSignGrade()) {
		std::cout << *this << " cannot sign " << form;
		std::cout << " because it's grade is too low." << std::endl;
	} else if (form.getSign()) {
		std::cout << *this << " cannot sign " << form;
		std::cout << " because the form is already signed." << std::endl;
	}
	form.beSigned(*this);
}

void Bureaucrat::executeForm(const Form &form) {
	form.execute(*this);
	std::cout << *this << " executes " << form << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception: GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception: GradeTooLowException");
}

std::ostream & operator<<(std::ostream &out, Bureaucrat const &src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}