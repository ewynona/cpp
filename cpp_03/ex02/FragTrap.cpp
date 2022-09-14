#include "FragTrap.hpp"

std::string FragTrap::_messages[5] = {
	"Away with thee!",
	"Hocus pocus!",
	"Ahhh!",
	"Alaka-ZAM!",
	"Ha-HA!"
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor is called" << std::endl;

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_lvl = 1;
	this->_model = "FR4G-TP";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor is called" << std::endl;
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
