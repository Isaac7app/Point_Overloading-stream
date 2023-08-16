#pragma once
#include <ostream>

using namespace std;

class Point
{
public:
	Point(int valueOne,int valueTwo);

	int getValueOne() const;
	int getValueTwo();

	void setValueOne(int valueOne);
	void setValueTwo(int valueTwo);

private:
	int valueOne;
	int valueTwo;
};

ostream& operator<<(ostream& stream, const Point& point);

