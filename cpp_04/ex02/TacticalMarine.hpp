#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & other);
	virtual ~TacticalMarine();

	TacticalMarine & operator=(TacticalMarine const & other);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};


#endif