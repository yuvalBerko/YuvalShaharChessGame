#include "Rook.h"


Rook::Rook(char type, Point pos) : Troop::Troop(type, pos)
{
}

Rook::~Rook() = default;

void Rook::verifyMove(Point& movTo, Troop* currBoard[8][8], Manager* manager, Troop* curr) const
{
	if (this->getPos() != movTo && (this->getPos().getX() == movTo.getX() || this->getPos().getY() == movTo.getY()))
	{
		if (this->getPos().getX() == movTo.getX()) // if they are on the save column
		{
			if (this->getPos().getY() > movTo.getY()) // if the current position on the line is upper
			{
				for (int i = this->getPos().getY() - 1; i > movTo.getY(); i--)
				{
					if (!currBoard[this->getPos().getX()][i]) // if found a player on the way
					{
						throw exception("Invalid Move!");
					}
				}

				if (currBoard[movTo.getX()][movTo.getY()]) // if there is a player in destination
				{
					if (currBoard[movTo.getX()][movTo.getY()]->isBlack() ^ this->isBlack()) // if its the opposite team's
					{
						manager->removeTroop(currBoard[movTo.getX()][movTo.getY()]); // remove the troop from the board
						currBoard[curr->getPos().getX()][curr->getPos().getY()] = nullptr; // set the current position of curr to null
						curr->move(movTo); // move the troop
						currBoard[movTo.getX()][movTo.getY()] = curr; // set the place to curr
					}
					else
					{ 
						throw exception("Invalid Move!");
					}
				}
				else
				{
					currBoard[curr->getPos().getX()][curr->getPos().getY()] = nullptr; // set the current position of curr to null
					curr->move(movTo); // move the troop
					currBoard[movTo.getX()][movTo.getY()] = curr; // set the place to curr
				}
			}
		}
		else // if they are on the same row
		{
			if (this->getPos().getX() > movTo.getX()) // if the current player is more right
			{
				for (int i = this->getPos().getX() - 1; i > movTo.getX(); i--)
				{
					if (!currBoard[i][this->getPos().getY()]) // if found a player on the way
					{
						throw exception("Invalid Move!");
					}
				}

				if (currBoard[movTo.getX()][movTo.getY()]) // if there is a player in destination
				{
					if (currBoard[movTo.getX()][movTo.getY()]->isBlack() ^ this->isBlack()) // if its the opposite team's
					{
						manager->removeTroop(currBoard[movTo.getX()][movTo.getY()]); // remove the troop from the board
						currBoard[curr->getPos().getX()][curr->getPos().getY()] = nullptr; // set the current position of curr to null
						curr->move(movTo); // move the troop
						currBoard[movTo.getX()][movTo.getY()] = curr; // set the place to curr
					}
					else
					{
						throw exception("Invalid Move!");
					}
				}
				else
				{
					currBoard[curr->getPos().getX()][curr->getPos().getY()] = nullptr; // set the current position of curr to null
					curr->move(movTo); // move the troop
					currBoard[movTo.getX()][movTo.getY()] = curr; // set the place to curr
				}
			}
		}
	}
}
