#pragma once

#include "Troop.h"


class Rook : public Troop
{
	Rook(char type, Point pos);
	virtual ~Rook();

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const;
};