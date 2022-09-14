#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap constructor is called" << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor is called" << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << this->_model << " " << this->_name;
	std::cout << " attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage << " points of damage" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << this->_model << " " << this->_name;
	std::cout << " attacks " << target << " at melee, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	int	pierceDmg = amount - this->_armorDamageReduction;

	if (pierceDmg < 0)
		pierceDmg = 0;

	this->_hitPoints -= pierceDmg;
	if (this->_hitPoints < 0) {
		pierceDmg += this->_hitPoints;
		this->_hitPoints = 0;
	}
	std::cout << this->_model << " " << this->_name << " take ";
	std::cout << pierceDmg << " points of damage!" << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	int healed = amount;

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {
		healed -= (this->_hitPoints - this->_maxHitPoints);
		this->_hitPoints = this->_maxHitPoints;
	}
	std::cout << this->_model << " " << this->_name << " is repaired for ";
	std::cout << healed << "!" << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}
