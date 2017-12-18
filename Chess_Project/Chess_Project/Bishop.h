#pragma once

#include "Troop.h"


class Bishop : public Troop
{
	Bishop(const char type, const Point pos);
	virtual ~Bishop() = default;

	virtual void verifyMove(const Point& movTo) const;
};