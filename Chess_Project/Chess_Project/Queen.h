#pragma once

#include "Troop.h"


class Queen : public Troop
{
	Queen(const char type, const Point pos);
	virtual ~Queen() = default;

	virtual void verifyMove(const Point& movTo) const;
};