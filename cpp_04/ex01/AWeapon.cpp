#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apCost, int damage) {
	this->_name = name;
	this->_apCost = apCost;
	this->_damage = damage;
}

AWeapon::AWeapon(const AWeapon &other) {
	this->_name = other._name;
	this->_apCost = other._apCost;
	this->_damage = other._damage;
}

AWeapon & AWeapon::operator=(const AWeapon &other) {
	this->_name = other._name;
	this->_apCost = other._apCost;
	this->_damage = other._damage;
	return (*this);
}

AWeapon::~AWeapon() {
}

const std::string AWeapon::getName() const {
	return (this->_name);
}

int AWeapon::getAPCost() const {
	return (this->_apCost);
}

int AWeapon::getDamage() const {
	return (this->_damage);
}