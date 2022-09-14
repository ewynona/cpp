#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	std::cout << "NinjaTrap constructor is called" << std::endl;

	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_lvl = 1;
	this->_model = "INAC-TP";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap destructor is called" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap) {
	std::cout << this->_model << " tries to befriend ";
	std::cout << trap.getModel() << " " << trap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap) {
	std::cout << this->_model << " angrily rustles with glands at " << trap.getModel() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap) {
	std::cout << this->_model << " avoids " << trap.getModel() << " " << trap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap) {
	std::cout << this->_name << " exclaims at the sight at " << trap.getName() << ": ";
	std::cout << "Go away imitator!!!" << std::endl;
}
