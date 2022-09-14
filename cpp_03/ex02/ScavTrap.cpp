#include "ScavTrap.hpp"

std::string ScavTrap::_messages[5] = {
		"You call yourself a badass?",
		"Wow, did I really do that?",
		"Is it dead? Can, can I open my eyes now?",
		"I didn't panic! Nope, not me!",
		"Not so tough after all!"
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor is called" << std::endl;

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_lvl = 1;
	this->_model = "SC4V-TP";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor is called" << std::endl;
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