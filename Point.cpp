#include "Point.h"



Point::Point(int x, int y) : x{x}, y{y}
{
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int x)
{
	 this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}


ostream& operator<<(ostream& stream, const Point& point)
{
	stream << "(" << point.getX() << point.getY() << ")" << endl;
	return stream;
}
