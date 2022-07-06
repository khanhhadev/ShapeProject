#pragma once
#include "Shape.h"

class Rectangle : public Shape {
protected:
	Point m_Center;
	int m_Width, m_Length;
public:
	virtual float getPerimeter();
	virtual float getArea();
	virtual Rectangle* fromString(const string& s);
	virtual string toString();
};