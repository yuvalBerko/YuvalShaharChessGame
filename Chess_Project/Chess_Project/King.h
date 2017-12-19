#pragma once

#include "Troop.h"


class King : public Troop
{
	King(char type, Point pos);
	virtual ~King() = default;

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const;
};