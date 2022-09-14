#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string str) {
	this->setType(str);
}

void Weapon::setType(std::string str) {
	this->_type = str;
}

const std::string & Weapon::getType() {
	std::string &type = this->_type;
	return type;
}