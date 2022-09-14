#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & other);
	virtual ~SuperMutant(void);

	SuperMutant & operator=(SuperMutant const & other);

	virtual void takeDamage(int damage);
};

#endif
