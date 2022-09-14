#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
	this->_name = name;
	this->_title = title;

	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. ";
	std::cout << "Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other) {
	this->_name = other._name;
	this->_title = other._title;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &other) {
	this->_name = other._name;
	this->_title = other._title;

	return (*this);
}

std::string Sorcerer::getName() const {
	return (this->_name);
}

std::string Sorcerer::getTitle() const {
	return (this->_title);
}

void Sorcerer::polymorph(const Victim & victim) const {
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & out, const Sorcerer & src) {
	out << "I am " << src.getName() << ", ";
	out << src.getTitle() << ", ";
	out << "and I like ponies!" << std::endl;

	return (out);
}
