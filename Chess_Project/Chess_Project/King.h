#pragma once

#include "Troop.h"


class King : public Troop
{
	King(const char type, const Point pos);
	virtual ~King() = default;

	virtual void verifyMove(const Point& movTo) const;
};