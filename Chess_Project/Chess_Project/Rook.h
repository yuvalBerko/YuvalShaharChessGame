#pragma once

#include "Troop.h"


class Rook : public Troop
{
	Rook(const char type, const Point pos);
	virtual ~Rook() = default;

	virtual void verifyMove(const Point& movTo) const;
};