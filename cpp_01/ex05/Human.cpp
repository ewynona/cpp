#include "Human.hpp"

const Brain &Human::getBrain() {
	return (this->_brain);
}

const std::string Human::identify() const {
	return this->_brain.identify();
}

