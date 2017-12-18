#pragma once

#include "Point.h"


class Troop
{
private:
	char _type;
	Point _pos;

public:
	Troop(const char type, const Point pos);
	virtual ~Troop() = default;

	void move(const Point& newPos);
	Point getPos() const;

	virtual void verifyMove(const Point& movTo) const = 0;
};