#pragma once

#include "Troop.h"
#include "Board.h"
#include "Pipe.h"


class Manager
{
private:
	vector<Troop*> _troops;
	Board _gameBoard;
	Pipe _connection;

public:
	Manager();
	~Manager();

	void addTroop(Troop* newT);
	void removeTroop(Troop* toRemove);
};