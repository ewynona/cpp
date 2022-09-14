#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer& other);
	Sorcerer& operator= (const Sorcerer& other);
	virtual ~Sorcerer();

	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(const Victim & victim) const;

private:
	Sorcerer();

	std::string	_name;
	std::string	_title;

};

std::ostream& operator<< (std::ostream& out, const Sorcerer& src);

#endif
