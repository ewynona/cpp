#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	std::cout << "SuperTrap constructor is called" << std::endl;

	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_lvl = 1;
	this->_model = "SUP4-TP";
	this->_meleeAttackDamage = FragTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor is called" << std::endl;
}

void SuperTrap::rangedAttack(const std::string &target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) {
	FragTrap::meleeAttack(target);
}
