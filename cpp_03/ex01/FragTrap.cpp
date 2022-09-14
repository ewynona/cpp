#include "FragTrap.hpp"

std::string FragTrap::_messages[5] = {
		"Away with thee!",
		"Hocus pocus!",
		"Ahhh!",
		"Alaka-ZAM!",
		"Ha-HA!"
};

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor is called" << std::endl;

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
	std::cout << "FragTrap destructor is called" << std::endl;
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
	int	pierceDmg = amount - this->_armorDamageReduction;

	if (pierceDmg < 0)
		pierceDmg = 0;

	this->_hitPoints -= pierceDmg;
	if (this->_hitPoints < 0) {
		pierceDmg += this->_hitPoints;
		this->_hitPoints = 0;
	}
	std::cout << this->_name << " take "
			  << pierceDmg << " points of damage!" << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	int healed = amount;

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {
		healed -= (this->_hitPoints - this->_maxHitPoints);
		this->_hitPoints = this->_maxHitPoints;
	}
	std::cout << this->_name << " is repaired for "
			  << healed << "!" << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	int				attackType = rand() % 2;
	int				energyCost = 25;
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
