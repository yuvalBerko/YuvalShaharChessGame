#pragma once

#include "Troop.h"


class Pawn : public Troop
{
	Pawn(const char type, const Point pos);
	virtual ~Pawn() = default;

	virtual void verifyMove(const Point& movTo) const;
};