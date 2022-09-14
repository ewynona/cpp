#include "Form.hpp"

Form::Form(std::string name, const int gradeToSign, const int gradeToExc):
	_name(name), _gradeToExc(gradeToExc), _gradeToSign(gradeToSign) {

	this->_signed = false;
}

Form::Form(const Form &other) :
	_name(other._name), _gradeToExc(other._gradeToExc), _gradeToSign(other._gradeToSign) {

	this->_signed = other._signed;
}

Form::~Form() {}

Form & Form::operator=(const Form &other) {
	if (this == &other)
		return (*this);

	this->_signed = other._signed;
	return (*this);
}

bool Form::getSign() {
	return (this->_signed);
}

const int Form::getSignGrade() const {
	return (this->_gradeToSign);
}

const int Form::getExcGrade() const {
	return (this->_gradeToExc);
}

const std::string Form::getName() const {
	return (this->_name);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (this->_gradeToSign < bureaucrat.getGrade())
		throw (Form::GradeTooLowException());
	else if (this->_signed)
		throw (Form::FormSignedException());
	else {
		this->_signed = true;
		std::cout << bureaucrat << " signs " << *this << std::endl;
	}
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("Exception: GradeTooLowException");
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("Exception: GradeTooHighException");
}

const char * Form::FormSignedException::what() const throw() {
	return ("Form is already signed");
}

std::ostream & operator<<(std::ostream & out, Form const & src) {
	out << src.getName() << " with grade to sign " << src.getSignGrade();
	return (out);
}