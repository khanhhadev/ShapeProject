#include "Point.h"
#include <math.h>

Point::Point()
{

};
Point::Point(Point& p):m_x(p.m_x), m_y(p.m_y)
{

};
Point::~Point()
{

};

int Point::getX() const
{
	return m_x;
};
int Point::getY() const
{
	return m_y;
};
void Point::setX(int value)
{
	m_x = value;
};
void Point::setY(int value)
{
	m_y = value;
};
void Point::set(int x, int y)
{
	m_x = x;
	m_y = y;
};

float Point::distance(Point& pA, Point& pB)
{
	return sqrt((pB.m_x - pA.m_x) * (pB.m_x - pA.m_x) + (pB.m_y - pA.m_y) * (pB.m_y - pA.m_y));
};
int Point::dotProduct(Point& pA, Point& pB)
{
	return (pA.m_x * pB.m_y + pA.m_y * pB.m_x);
};

Point Point::operator+ (Point& p)
{
	Point Result;
	Result.m_x = m_x + p.m_x;
	Result.m_y = m_y + p.m_y;
	return Result;
};
Point Point::operator- (Point& p)
{
	Point Result;
	Result.m_x = m_x - p.m_x;
	Result.m_y = m_y - p.m_y;
	return Result;
};
Point Point::operator* (Point& p)
{
	Point Result;
	Result.m_x = m_x * p.m_x;
	Result.m_y = m_y * p.m_y;
	return Result;
};
Point Point::operator/ (Point& p)
{
	Point Result;
	if ((p.m_x != 0) && (p.m_y != 0))
	{
		Result.m_x = m_x / p.m_x;
		Result.m_y = m_y / p.m_y;
	}
	return Result;
};
Point& Point::operator+= (Point& p)
{
	m_x = m_x + p.m_x;
	m_y = m_y + p.m_y;
	return *this;
};
Point& Point::operator-= (Point& p)
{
	m_x = m_x - p.m_x;
	m_y = m_y - p.m_y;
	return *this;
};
Point& Point::operator*= (Point& p)
{
	m_x = m_x * p.m_x;
	m_y = m_y * p.m_y;
	return *this;
};
Point& Point::operator/= (Point& p)
{
	if ((p.m_x != 0) && (p.m_y != 0))
	{
		m_x = m_x / p.m_x;
		m_y = m_y / p.m_y;
	}
	return *this;
};