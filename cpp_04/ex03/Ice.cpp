#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &other) : AMateria("ice") {
	this->_xp = other._xp;
}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & other){
	if (this == &other)
		return (*this);

	this->_type = other._type;
	this->_xp = other._xp;
	return (*this);
}

AMateria * Ice::clone() const {
	Ice * copy = new Ice(*this);

	return (copy);
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
