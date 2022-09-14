#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap fragTrap("brobot");
	ScavTrap scavTrap("metal");

	srand(time(NULL));
	fragTrap.vaulthunter_dot_exe("Spider");
	fragTrap.vaulthunter_dot_exe("Skeleton");
	fragTrap.vaulthunter_dot_exe("Zombie");
	std::cout << std::endl;
	fragTrap.takeDamage(1);
	fragTrap.takeDamage(3);
	fragTrap.takeDamage(4);
	fragTrap.takeDamage(94);
	fragTrap.takeDamage(23);
	fragTrap.beRepaired(13);
	fragTrap.beRepaired(65);
	fragTrap.beRepaired(110);
	fragTrap.takeDamage(23);
	std::cout << std::endl;
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();

	return (0);
}