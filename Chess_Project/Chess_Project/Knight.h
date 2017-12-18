#pragma once

#include "Troop.h"


class Knight : public Troop
{
	Knight(const char type, const Point pos);
	virtual ~Knight() = default;

	virtual void verifyMove(const Point& movTo) const;
};