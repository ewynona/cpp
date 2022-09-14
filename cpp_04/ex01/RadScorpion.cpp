#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other) {}

RadScorpion & RadScorpion::operator=(const RadScorpion &other) {
	this->_type = other._type;
	this->_hp = other._hp;
	return (*this);
}

