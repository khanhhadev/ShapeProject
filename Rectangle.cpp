#include "Rectangle.h"

float Rectangle::getPerimeter()
{
	return (m_Width + m_Length) * 2;
};

float Rectangle::getArea()
{
	return (m_Width * m_Length);
};

Rectangle* Rectangle::fromString(const string& s)
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
			m_Width = toInt(x);
			break;
		case 4:
			m_Length = toInt(x);
			break;
		default:
			break;
		}
		i++;
	}

	return this;
};

string Rectangle::toString()
{
	return "1 "+ to_string(m_Center.getX()) + " " + to_string(m_Center.getY()) + " "
		+ to_string(m_Width) + " " + to_string(m_Length) + "\tPerimeter: " + to_string(getPerimeter()) + "\tArea: " + to_string(getArea());
};