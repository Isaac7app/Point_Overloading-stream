#pragma once
#include <ostream>

using namespace std;

class Point
{
public:
	Point(int x, int y);

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

	bool operator==(const Point& other) const;

private:
	int x;
	int y;
};

ostream& operator<<(ostream& stream, const Point& point);

