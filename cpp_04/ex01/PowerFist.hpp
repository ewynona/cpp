#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP
# include "AWeapon.hpp"

class	PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(PowerFist const & other);
	virtual ~PowerFist();

	PowerFist & operator=(PowerFist const & other);

	virtual void attack() const;
};

#endif