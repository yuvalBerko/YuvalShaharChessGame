#pragma once

#include "Troop.h"


class Bishop : public Troop
{
	Bishop(char type, Point pos);
	virtual ~Bishop() = default;

	virtual void verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const;
};