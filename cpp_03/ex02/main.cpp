#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <ctime>

int main(void)
{
	FragTrap fragTrap("frag");
	ScavTrap scavTrap("scav");

	srand(time(0));
	fragTrap.vaulthunter_dot_exe("frog");
	fragTrap.vaulthunter_dot_exe("bird");
	fragTrap.vaulthunter_dot_exe("bat");
	fragTrap.takeDamage(25);
	fragTrap.takeDamage(90);
	fragTrap.beRepaired(38);
	fragTrap.beRepaired(94);
	std::cout << std::endl;
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.takeDamage(25);
	scavTrap.takeDamage(90);
	scavTrap.beRepaired(38);
	scavTrap.beRepaired(94);
	return (0);
}