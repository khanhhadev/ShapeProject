#pragma once
#include "Shape.h"

class Circle : public Shape {
protected:
	Point m_Center;
	int m_Radius;
public:
	virtual float getPerimeter();
	virtual float getArea();
	virtual Circle* fromString(const string& s);
	virtual string toString();
};