#ifndef BLASTER_HPP
# define BLASTER_HPP
# include "AWeapon.hpp"

class	Blaster : public AWeapon {
public:
	Blaster();
	Blaster(Blaster const & other);
	virtual ~Blaster();

	Blaster & operator=(Blaster const & other);

	virtual void attack() const;
};

#endif