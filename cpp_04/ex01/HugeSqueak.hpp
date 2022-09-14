#ifndef HUGESQUEAK_HPP
# define  HUGESQUEAK_HPP
# include "Enemy.hpp"

class HugeSqueak : public Enemy {
public:
	HugeSqueak(void);
	HugeSqueak(HugeSqueak const & other);
	virtual ~HugeSqueak(void);

	HugeSqueak & operator=(HugeSqueak const & other);

};

#endif