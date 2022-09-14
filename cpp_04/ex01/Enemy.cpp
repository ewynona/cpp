#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) {
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy &other) {
	this->_hp = other._hp;
	this->_type = other._type;
}

Enemy & Enemy::operator=(const Enemy &other) {
	this->_hp = other._hp;
	this->_type = other._type;
	return (*this);
}

Enemy::~Enemy() {}

int Enemy::getHP() const {
	return (this->_hp);
}

std::string Enemy::getType() const {
	return (this->_type);
}

void Enemy::takeDamage(int damage) {
	if (damage > 0) {
		this->_hp -= damage;
		if (this->_hp < 0) {
			this->_hp = 0;
		}
	}
}