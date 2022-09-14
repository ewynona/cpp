#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
public:

	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce();
	void	randomChump();

private:
	std::string _type;
	std::string _name;

};

#endif
