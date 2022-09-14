#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, this->_type);
}

Zombie	*ZombieEvent::randomChump() {
	std::string name[5] = {"Shon", "Sheldon", "Jon", "Max", "Boris"};
	std::string type[5] = {"Warrior", "Archer", "Teacher", "Miner", "Bomber"};

	srand(time(0));

	Zombie *zombie;

	zombie = new Zombie(name[rand() % 5], type[rand() % 5]);
	zombie->announce();

	return (zombie);
}