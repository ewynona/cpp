#include "FragTrap.hpp"

std::string FragTrap::_messages[5] = {
		"Away with thee!",
		"Hocus pocus!",
		"Ahhh!",
		"Alaka-ZAM!",
		"Ha-HA!"
};

FragTrap::FragTrap(std::string name) {
	std::cout << "Constructor is called" << std::endl;

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_lvl = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor is called" << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage << " points of damage" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " attacks " << target << " at melee, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP " << this->_name << " took ";
	if ((int)(amount - this->_armorDamageReduction) > this->_hitPoints) {
		std::cout << this->_hitPoints << " damage";
		this->_hitPoints = 0;
	} else if (amount <= (unsigned int)this->_armorDamageReduction) {
		std::cout << " 0 damage";
	} else {
		std::cout << amount - this->_armorDamageReduction << " damage";
		this->_hitPoints -= (amount - this->_armorDamageReduction);
	}
	std::cout << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " << this->_name << " repaired to ";
	if ((int)(amount + this->_hitPoints) > this->_maxHitPoints) {
		std::cout << this->_maxHitPoints - this->_hitPoints << " hp";
		this->_hitPoints = this->_maxHitPoints;
	} else {
		std::cout << amount << " hp";
		this->_hitPoints += amount;
	}
	std::cout << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	int				attackType = rand() % 2;
	int	energyCost = 25;
	std::string		attackMessage = this->_messages[rand() % 5];

	if (this->_energyPoints >= energyCost) {
		this->_energyPoints -= energyCost;
		std::cout << attackMessage << " ";
		if (attackType) {
			this->meleeAttack(target);
		} else {
			this->rangedAttack(target);
		}
	} else {
		std::cout << "Not enough energy" << std::endl;
	}
}
