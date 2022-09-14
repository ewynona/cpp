#include "Character.hpp"

Character::Character(std::string name) {
	this->_name = name;
	this->_equippedSlots = 0;

	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
	}
}

Character::Character(const Character &other) {
	this->_name = other._name;

	for (int i = 0; i < this->_equippedSlots; i++) {
		this->equip(other._inventory[i]->clone());
	}
	for (int i = this->_equippedSlots; i < 4; i++) {
		this->_inventory[i] = nullptr;
	}
}

Character::~Character() {
	for (int i = 0; i < this->_equippedSlots; i++) {
		delete this->_inventory[i];
	}
}

Character & Character::operator=(const Character &other) {
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_equippedSlots = 0;
	for (int i = 0; i < other._equippedSlots; i++) {
		this->equip(other._inventory[i]->clone());
	}
	for (int i = other._equippedSlots; i < 4; i++) {
		this->_inventory[i] = nullptr;
	}
	return (*this);
}

const std::string & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *m) {
	if (this->_equippedSlots >= 4 || m == nullptr) {
		std::cout << this->_name << "'s inventory is full or there is no matter" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_equippedSlots; i++) {
		if (this->_inventory[i] == m) {
			return ;
		}
	}
	this->_inventory[this->_equippedSlots] = m;
	this->_equippedSlots++;

}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= this->_equippedSlots || this->_inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < this->_equippedSlots - 1; i++) {
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = nullptr;
	}
	this->_equippedSlots--;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || this->_inventory[idx] == nullptr || idx >= this->_equippedSlots) {
		return;
	}
	this->_inventory[idx]->use(target);
}

void Character::inventoryCheck(int idx) {
	if (idx < 0 || this->_inventory[idx] == nullptr || idx >= this->_equippedSlots) {
		return ;
	}
	std::cout << idx << ": ";
	std::cout << this->_inventory[idx]->getType() << ": ";
}
