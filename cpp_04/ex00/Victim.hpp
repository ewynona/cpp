#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
public:

	Victim(std::string name);
	Victim(const Victim& other);
	Victim& operator= (const Victim& other);
	virtual ~Victim();

	std::string	getName() const;
	virtual void	getPolymorphed() const;

protected:
	std::string	_name;
};

std::ostream & operator<< (std::ostream & out, const Victim& other);

#endif
