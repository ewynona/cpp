#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name, std::string type) {
	this->_type = type;
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << "<" + this->_name + " (" + this->_type + ")>  ate" << std::endl;
}

void	Zombie::announce() {
	std::cout << "<" + this->_name + " (" + this->_type + ")>  Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::randomChump() {
	std::string name[5] = {"Shon", "Sheldon", "Jon", "Max", "Boris"};
	std::string type[5] = {"Warrior", "Archer", "Teacher", "Miner", "Bomber"};

	this->_name = name[rand() % 5];
	this->_type = type[rand() % 5];
}