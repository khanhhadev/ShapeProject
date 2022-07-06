#pragma once
#include "Shape.h"

class Triangle : public Shape {
protected:
	Point m_3Point[3];
public:
	virtual float getPerimeter();
	virtual float getArea();
	virtual Triangle* fromString(const string& s);
	virtual string toString();

};