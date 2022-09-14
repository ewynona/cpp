#include "ScavTrap.hpp"

std::string ScavTrap::_messages[5] = {
		"You call yourself a badass?",
		"Wow, did I really do that?",
		"Is it dead? Can, can I open my eyes now?",
		"I didn't panic! Nope, not me!",
		"Not so tough after all!"
};

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor is called" << std::endl;

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

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor is called" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage << " points of damage" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "SC4V-TP " << this->_name;
	std::cout << " attacks " << target << " at melee, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepaired(unsigned int amount) {
	int healed = amount;

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {
		healed -= (this->_hitPoints - this->_maxHitPoints);
		this->_hitPoints = this->_maxHitPoints;
	}
	std::cout << this->_name << " is repaired for ";
	std::cout << healed << std::endl;
	std::cout << "Health: " << this->_hitPoints << std::endl;
}

void ScavTrap::challengeNewcomer() {
	int dmg = rand() % 100;
	int event = rand() % 2;
	std::string eventMessage = this->_messages[rand() % 5];

	if (event) {
		std::cout << "SC4V-tp shot himself in the knee" << std::endl;
		this->takeDamage(dmg);
	} else {
		std::cout << eventMessage << std::endl;
	}
}