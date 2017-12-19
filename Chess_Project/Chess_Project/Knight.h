#pragma once

#include "Troop.h"


class Knight : public Troop
{
	Knight(char type, Point pos);
	virtual ~Knight() = default;

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const;
};