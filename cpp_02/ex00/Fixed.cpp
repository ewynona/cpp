#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;

	this->_value = src.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Desctructor called" << std::endl;
}

Fixed&	Fixed::operator= (const Fixed& src) {
	std::cout << "Assign operator called" << std::endl;

	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits called" << std::endl;

	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits called" << std::endl;

	this->_value = raw;
}