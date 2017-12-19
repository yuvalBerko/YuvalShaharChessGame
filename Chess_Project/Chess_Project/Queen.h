#pragma once

#include "Troop.h"


class Queen : public Troop
{
	Queen(char type, Point pos);
	virtual ~Queen() = default;

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const;
};