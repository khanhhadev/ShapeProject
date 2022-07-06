#pragma once
#include "Shape.h"

class Ellipse : public Shape {
protected:
	Point m_Center;
	int m_RadiusX, m_RadiusY;
public:
	virtual float getPerimeter();
	virtual float getArea();
	virtual Ellipse* fromString(const string& s);
	virtual string toString();
};