#pragma once

#include <iostream>
#include <string>
#include "Troop.h"
#include <vector>

using std::string;
using std::vector;

class Board
{
private:
	Troop* _board[8][8];

public:
	Board(Troop* board[8][8]);
	Board(string board);
	~Board();

	void setBoard(vector<Troop*> troops);
	string getStringBoard() const;
};