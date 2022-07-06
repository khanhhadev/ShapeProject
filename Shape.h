#pragma once
#include "Point.h"




class Shape : public Point {
protected:
	int toInt(const string& s);
public:
	virtual float getPerimeter() { return 1; };
	virtual float getArea() { return 1; };
	virtual Shape* fromString(const string& s) { return new Shape; };
	virtual string toString() { return ""; };
};
