#pragma once
#include <ostream>

using namespace std;

class Point
{
public:
	Point(int x, int y);

	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

private:
	int x;
	int y;
};

ostream& operator<<(ostream& stream, const Point& point);

