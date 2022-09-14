#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
	ZombieEvent	event;
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		*zombie3;

	zombie1 = new Zombie("Undying", "common");
	zombie1->announce();
	delete zombie1;
	std::cout << std::endl;

	event.setZombieType("Archer");
	zombie2 = event.newZombie("Cherry");
	zombie2->announce();
	delete zombie2;
	std::cout << std::endl;

	zombie3 = event.randomChump();
	delete zombie3;

	return (0);
}