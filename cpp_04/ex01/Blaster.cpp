#include "Blaster.hpp"

Blaster::Blaster() : AWeapon("Blaster", 3, 13) {
}

Blaster::Blaster(const Blaster &other) : AWeapon(other) {
}

Blaster & Blaster::operator=(const Blaster &other) {
	this->_name = other._name;
	this->_damage = other._damage;
	this->_apCost = other._apCost;
	return (*this);
}

Blaster::~Blaster() {}

void Blaster::attack() const {
	std::cout << "* EZ *" << std::endl;
}