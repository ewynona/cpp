#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(MateriaSource const & other);
	virtual ~MateriaSource();

	MateriaSource & operator=(MateriaSource const & other);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);

private:

	AMateria *	_src[4];
	int			_amount;
};

#endif
