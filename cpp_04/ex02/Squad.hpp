#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
public:
	Squad();
	Squad(Squad const & other);
	virtual ~Squad();

	Squad & operator=(Squad const & other);

	int getCount() const;
	ISpaceMarine* getUnit(int index) const;
	int push(ISpaceMarine* unit);

private:
	int	_count;
	ISpaceMarine **_units;
};

#endif