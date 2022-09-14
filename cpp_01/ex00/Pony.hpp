#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony {
public:

	Pony(std::string name);
	~Pony(void);

	void		work(void);

private:
	std::string _name;
	void		_die(void);
};

#endif
