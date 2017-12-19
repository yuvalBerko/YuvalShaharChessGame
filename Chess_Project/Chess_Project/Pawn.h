#pragma once

#include "Troop.h"


class Pawn : public Troop
{
	Pawn(char type, Point pos);
	virtual ~Pawn() = default;

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const;
};