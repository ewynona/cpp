#ifndef RADSCORPION_HPP
# define  RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const & other);
	virtual ~RadScorpion(void);

	RadScorpion & operator=(RadScorpion const & other);

};

#endif
