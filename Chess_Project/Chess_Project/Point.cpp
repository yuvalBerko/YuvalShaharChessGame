#include "Point.h"

Point::Point(int x, int y) : _x(x), _y(y)
{
}

Point::Point() : _x(0), _y(0)
{
}

int Point::getX()
{
	return _x;
}

int Point::getY()
{
	return _y;
}

bool Point::operator==(Point other) const
{
	return _x == other._x && _y == other._y;
}

bool Point::operator!=(Point other) const
{
	return !(*this == other);
}
