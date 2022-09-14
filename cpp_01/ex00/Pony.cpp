#include "Pony.hpp"

Pony::Pony(std::string name) {
	this->_name = name;
}

Pony::~Pony() {
	this->_die();
}

void Pony::work() {
	std::cout << "Pony \"" << this->_name << "\" is working" << std::endl;
}

void Pony::_die() {
	std::cout << "Pony \"" << this->_name << "\" died :(" << std::endl;
}