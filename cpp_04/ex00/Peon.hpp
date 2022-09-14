#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(std::string name);
	Peon(const Peon & other);
	Peon & operator=(const Peon & other);
	virtual ~Peon();

	virtual void	getPolymorphed() const;
};

#endif
