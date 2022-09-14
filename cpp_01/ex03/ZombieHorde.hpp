#ifndef ZombieHorde_HPP
# define ZombieHorde_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int n);
	~ZombieHorde();

	void	announce();
	Zombie	randomChump();

private:
	int		_n;
	Zombie	*_zombies;
};

#endif
