#include "Point.h"

Point::Point(int valueOne, int valueTwo) : valueOne{valueOne}, valueTwo{valueTwo}
{
}

int Point::getValueOne() const
{
	return valueOne;
}

int Point::getValueTwo()
{
	return valueTwo;
}

void Point::setValueOne(int valueOne)
{
	this->valueOne = valueOne;
}

void Point::setValueTwo(int valueTwo)
{
	this->valueTwo = valueTwo;
}

ostream& operator<<(ostream& stream, const Point& point)
{
	stream << point.getValueOne();
	return stream;
}
