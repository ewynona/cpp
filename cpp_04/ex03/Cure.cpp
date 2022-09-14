#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria(other) {
	this->_xp = other._xp;
}

Cure::~Cure() {}

Cure & Cure::operator=(const Cure &other) {
	if (this == &other)
		return (*this);

	this->_type = other._type;
	this->_xp = other._xp;
	return (*this);
}

AMateria * Cure::clone() const {
	Cure * copy = new Cure(*this);

	return (copy);
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}
