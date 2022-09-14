#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & other);
	virtual ~Enemy();

	Enemy & operator=(Enemy const & other);

	std::string getType() const;
	int	getHP() const;

	virtual void takeDamage(int damage);

protected:
	int	_hp;
	std::string _type;
};

#endif
