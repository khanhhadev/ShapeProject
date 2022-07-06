#include "Triangle.h"

float Triangle::getPerimeter()
{
	return distance(m_3Point[0], m_3Point[1]) + distance(m_3Point[2], m_3Point[1]) + distance(m_3Point[0], m_3Point[2]);
};

float Triangle::getArea()
{
	float p = getPerimeter() / 2;
	return
		sqrt(p * (p - distance(m_3Point[0], m_3Point[1])) * (p - distance(m_3Point[2], m_3Point[1])) * (p - distance(m_3Point[0], m_3Point[2])));
};

Triangle* Triangle::fromString(const string& s)
{
	int i = 1;
	int n = s.length();
	int index = 0;
	while (i <= 6)
	{
		string x = "";
		do
		{
			x += s[index++];
		} while ((index < n)&&(s[index] != ' '));
		index++;
		switch (i)
		{
		case 1:
			m_3Point[0].setX(toInt(x));
			break;

		case 2:
			m_3Point[0].setY(toInt(x));
			break;

		case 3:
			m_3Point[1].setX(toInt(x));
			break;

		case 4:
			m_3Point[1].setY(toInt(x));
			break;
		case 5:
			m_3Point[2].setX(toInt(x));
			break;

		case 6:
			m_3Point[2].setY(toInt(x));
			break;
		default:
			break;
		} 
		i++;
	}

	return this;
};

string Triangle::toString()
{
	string returnString = "0";
	for (int i = 0; i < 3; i++) returnString += " " + to_string(m_3Point[i].getX()) + " " + to_string(m_3Point[i].getY());
	returnString = returnString + "\tPerimeter: " + to_string(getPerimeter()) + "\tArea: " + to_string(getArea());
	return returnString;
};