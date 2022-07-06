#include "Circle.h"

float Circle::getPerimeter()
{
	return 2 * m_Radius * PI;
};

float Circle::getArea()
{
	return m_Radius * m_Radius * PI;
};

Circle* Circle::fromString(const string& s)
{
	int i = 1;
	int n = s.length();
	int index = 0;
	while (i <= 3)
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
			m_Radius = toInt(x);
			break;

		default:
			break;
		}
		i++;
	}
	return this;
};

string Circle::toString()
{
	return "2 " + to_string(m_Center.getX()) + " " + to_string(m_Center.getX()) + " "
		+ to_string(m_Radius) + "\tPerimeter: " + to_string(getPerimeter()) + "\tArea: " + to_string(getArea());
};