#pragma once


class Point
{
private:
	int _x;
	int _y;

public:
	Point(int x, int y);
	Point();
	~Point() = default;

	int getX();
	int getY();

	bool operator==(Point other) const;
	bool operator!=(Point other) const;
};