#ifndef ORC_HPP
# define ORC_HPP
# include "Victim.hpp"

class Orc : public Victim {
public:
	Orc(std::string name);
	Orc(Orc const & other);
	virtual ~Orc();

	Orc & operator=(Orc const & other);

	virtual void	getPolymorphed() const;
};

#endif
