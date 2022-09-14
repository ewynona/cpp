#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <ctime>

int main(void)
{
	srand(time(0));

	FragTrap fragTrap("frag");

	fragTrap.vaulthunter_dot_exe("frog");
	fragTrap.vaulthunter_dot_exe("bird");
	fragTrap.vaulthunter_dot_exe("bat");
	fragTrap.takeDamage(25);
	fragTrap.takeDamage(90);
	fragTrap.beRepaired(38);
	fragTrap.beRepaired(94);
	std::cout << std::endl;

	ScavTrap scavTrap("scav");

	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.takeDamage(25);
	scavTrap.takeDamage(90);
	scavTrap.beRepaired(38);
	scavTrap.beRepaired(94);
	std::cout << std::endl;

	NinjaTrap ninjaTrap("ninja");

	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(scavTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	std::cout << std::endl;

	SuperTrap superTrap("supa");

	superTrap.ninjaShoebox(fragTrap);
	superTrap.vaulthunter_dot_exe("ninja");
	superTrap.takeDamage(12);
	superTrap.beRepaired(11);
	superTrap.beRepaired(11);

	std::cout << std::endl;
	return (0);
}