#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	this->_type = type;
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << "<" + this->_name + " (" + this->_type + ")>  ate" << std::endl;
}

void Zombie::announce() {
	std::cout << "<" + this->_name + " (" + this->_type + ")>  Braiiiiiiinnnssss..." << std::endl;
}