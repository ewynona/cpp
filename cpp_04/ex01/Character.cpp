#include "Character.hpp"

Character::Character(const std::string &name) {
	this->_name = name;
	this->_ap = 40;
	this->_weapon = NULL;
}

Character::Character(const Character &other) {
	this->_name = other._name;
	this->_ap = other._ap;
	this->_weapon = other._weapon;
}

Character & Character::operator=(const Character &other) {
	this->_name = other._name;
	this->_ap = other._ap;
	this->_weapon = other._weapon;
	return (*this);
}

Character::~Character() {}

int Character::getAp() const{
	return (this->_ap);
}

AWeapon * Character::getWeapon() const{
	return (this->_weapon);
}

std::string Character::getName() const {
	return (this->_name);
}

void Character::recoverAP() {
	this->_ap += 10;
	if (this->_ap > 40) {
		this->_ap = 40;
	}
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (this->_weapon != NULL && this->_ap >= this->_weapon->getAPCost()) {
		std::cout << this->_name << " attacks " << enemy->getType();
		std::cout << " with a " << this->_weapon->getName() << std::endl;

		this->_ap -= this->_weapon->getAPCost();
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::ostream &operator<<(std::ostream &out, Character const &src) {
	out << src.getName() << " has " << src.getAp() << " AP and ";
	if (src.getWeapon()) {
		out << "wields a " << src.getWeapon()->getName();
	} else {
		out << "is unarmed";
	}
	out << std::endl;
	return (out);
}
