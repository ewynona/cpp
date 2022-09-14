#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->_n = n;
	if (n > 0) {
		this->_zombies = new Zombie[n];

		for (int i = 0; i < n; i++) {
			this->_zombies[i].randomChump();
		}
	} else {
		std::cout << "The horde is too small" << std::endl;
	}
}

ZombieHorde::~ZombieHorde() {
		delete [] this->_zombies;
}

void	ZombieHorde::announce() {
	for (int i = 0; i < this->_n; i++) {
		this->_zombies[i].announce();
	}
}
