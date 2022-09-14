#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
public:

	Zombie(std::string name, std::string type);
	~Zombie();
	void	announce();

private:
	std::string _type;
	std::string _name;

};

#endif
