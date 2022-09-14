#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50) {
}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other) {
}

PowerFist & PowerFist::operator=(const PowerFist &other) {
	this->_name = other._name;
	this->_damage = other._damage;
	this->_apCost = other._apCost;
	return (*this);
}

PowerFist::~PowerFist() {
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}