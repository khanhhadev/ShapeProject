#include "Ellipse.h"

float Ellipse::getPerimeter()
{
	return m_RadiusX * m_RadiusY * PI;
};

float Ellipse::getArea()
{
	return 2* sqrt((float)(pow(m_RadiusX,2) + pow(m_RadiusY, 2))/2) * PI;
};

Ellipse* Ellipse::fromString(const string& s)
{
	int i = 1;
	int n = s.length();
	int index = 0;
	while (i <= 4)
	{
		string x = "";
		do
		{
			x += s[index++];
		} while ((index < n) && (s[index] != ' '));
		index++;
		switch (i)
		{
		case 1:
			m_Center.setX(toInt(x));
			break;

		case 2:
			m_Center.setY(toInt(x));
			break;

		case 3:
			m_RadiusX = toInt(x);
			break;
		case 4:
			m_RadiusY = toInt(x);
			break;
		default:
			break;
		}
		i++;
	}

	return this;
};

string Ellipse::toString()
{
	return "3 " + to_string(m_Center.getX()) + " " + to_string(m_Center.getY()) + " "
		+ to_string(m_RadiusX) + " " + to_string(m_RadiusY) + "\tPerimeter: " + to_string(getPerimeter()) + "\tArea: " + to_string(getArea());
};