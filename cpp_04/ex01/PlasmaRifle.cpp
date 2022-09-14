#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other) {
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &other) {
	this->_name = other._name;
	this->_damage = other._damage;
	this->_apCost = other._apCost;
	return (*this);
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}