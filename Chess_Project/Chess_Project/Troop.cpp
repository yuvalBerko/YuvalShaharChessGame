#include "Troop.h"


Troop::Troop(char type, Point pos) : _type(type), _pos(pos)
{
}

void Troop::move(const Point & newPos)
{
	_pos = newPos;
}

Point Troop::getPos() const
{
	return _pos;
}

char Troop::getType() const
{
	return _type;
}

bool Troop::isBlack() const
{
	return _type >= 'a' && _type <= 'z';
}

void Troop::operator=(Troop * other)
{
	this->_type = other->_type;
	this->_pos = other->_pos;
}
