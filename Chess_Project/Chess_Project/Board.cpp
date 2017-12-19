#include "Board.h"
#include <string>
#define ARR_LEN 8

using std::string;

Board::Board(Troop* board[ARR_LEN][ARR_LEN])
{
	for (int i = 0; i < ARR_LEN; i++)
	{
		for (int j = 0; j < ARR_LEN; j++)
		{
			_board[i][j] = board[i][j];
		}
	}
}

void Board::setBoard(vector<Troop*> troops)
{
	for (int i = 0; i < ARR_LEN; i++)
	{
		for (int j = 0; j < ARR_LEN; j++)
		{
			_board[i][j] = troops[j*ARR_LEN + i]->getType();
		}
	}
}

string Board::getStringBoard() const
{
	string str = "";
}

char ** Board::getCharBoard() const
{
	return nullptr;
}
