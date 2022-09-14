#include "Orc.hpp"

Orc::Orc(std::string name) : Victim(name) {
	std::cout << "I will crush" << std::endl;
}

Orc::Orc(const Orc &other) : Victim(other.getName()) {
	std::cout << "I will crush" << std::endl;
}

Orc::~Orc() {
	std::cout << "Arght...." << std::endl;
}

Orc & Orc::operator=(const Orc &other) {
	this->_name = other._name;
	return (*this);
}

void Orc::getPolymorphed() const {
	Victim::getPolymorphed();
}