#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	srand(time(0));
	ZombieHorde horde(6);

	horde.announce();

	return (0);
}