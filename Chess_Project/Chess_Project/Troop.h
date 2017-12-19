#pragma once

#include "Point.h"
#include "Manager.h"
#include <exception>

using std::exception;


class Troop
{
private:
	char _type;
	Point _pos;

public:
	Troop(char type, Point pos);
	virtual ~Troop() = default;

	void move(const Point& newPos);
	Point getPos() const;
	char getType() const;

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const = 0;

	bool isBlack() const;

	void operator=(Troop* other);
};