#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &other) : Victim(other.getName()) {
	std::cout << "Zog zog." << 	std::endl;
}

Peon & Peon::operator=(const Peon &other) {
	this->_name = other._name;
	return (*this);
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator<< (std::ostream & out, const Peon& other) {
	out << "I'm " << other.getName() << " and I like otters!" << std::endl;

	return (out);
}