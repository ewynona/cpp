#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->_amount = 0;

	for (int i = 0; i < 4; i++) {
		this->_src[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	this->_amount = other._amount;
	for (int i = 0; i < this->_amount; i++) {
		this->MateriaSource::learnMateria(other._src[i]->clone());
	}
	for (int i = this->_amount; i < 4; i++) {
		this->_src[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->_amount; i++) {
		delete this->_src[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return (*this);
	this->_amount = 0;
	for (int i = 0; i < 4; i++) {
		if (this->_src[i])
			delete this->_src[i];
	}
	for (int i = 0; i < other._amount; i++) {
		this->learnMateria(other._src[i]->clone());
	}
	for (int i = other._amount; i < 4; i++) {
		this->_src[i] = nullptr;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (this->_amount >= 4 || materia == nullptr) {
		return ;
	}
	for (int i = 0; i < this->_amount; i++) {
		if (this->_src[i] == materia)
			return ;
	}
	this->_src[this->_amount] = materia;
	this->_amount++;
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < this->_amount; i++) {
		if (this->_src[i]->getType() == type) {
			return (this->_src[i]->clone());
		}
	}
	return (nullptr);
}