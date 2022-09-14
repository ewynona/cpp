#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other) {}

SuperMutant & SuperMutant::operator=(const SuperMutant &other) {
	this->_hp = other._hp;
	this->_type = other._type;
	return (*this);
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}
