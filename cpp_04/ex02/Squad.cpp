#include "Squad.hpp"

Squad::Squad() {
	this->_count = 0;
	this->_units = nullptr;
}

Squad::Squad(const Squad &other) : _count(0), _units(nullptr) {
	this->_count = 0;
	for (int i = 0; i < other.getCount(); i++) {
		this->Squad::push(other.getUnit(i)->clone());
	}
}

Squad::~Squad() {
	if (this->_units) {
		for (int i = 0; i < this->_count; i++) {
			delete this->_units[i];
		}
		delete this->_units;
		this->_units = nullptr;
	}
}

Squad & Squad::operator=(const Squad &other) {
	if (this == &other)
		return (*this);
	if (this->_units) {
		for (int i = 0; i < this->_count; i++) {
			delete this->_units[i];
		}
		delete [] this->_units;
		this->_units = nullptr;
	}
	this->_count = 0;
	for (int i = 0; i < other._count; i++) {
		this->push(other.getUnit(i)->clone());
	}
	return (*this);
}

int Squad::getCount() const {
	return (this->_count);
}

ISpaceMarine * Squad::getUnit(int index) const {
	if (index >= 0 && index < this->_count) {
		return (this->_units[index]);
	}
	return (nullptr);
}

int Squad::push(ISpaceMarine *unit) {
	ISpaceMarine ** newUnits;

	if (!unit) {
		std::cout << "can't add NULL SpaceMarine" << std::endl;
		return (this->_count);
	}
	if (this->_units) {
		for (int i = 0; i < this->_count; i++) {
			if (this->_units[i] == unit) {
				std::cout << "This unit also in squad" << std::endl;
				return (this->_count);
			}
		}
		newUnits = new ISpaceMarine *[this->_count + 1];
		for (int i = 0; i < this->_count; i++) {
			newUnits[i] = this->_units[i];
		}
		newUnits[this->_count] = unit;
		delete [] this->_units;
		this->_units = newUnits;
		this->_count++;
	} else {
		this->_units = new ISpaceMarine*[1];
		this->_units[0] = unit;
		this->_count = 1;
	}
	return (this->_count);
}









