#pragma once
#include <iostream>
#include <string>
using namespace std;

#define PI 3.14

class Point {
protected:
	int m_x, m_y;
public:
	Point();
	Point(Point& p);
	~Point();

	int getX() const;
	int getY() const;
	void setX(int);
	void setY(int);
	void set(int, int);

	static float distance(Point&, Point&);
	static int dotProduct(Point&, Point&);

	Point operator+ (Point& p);
	Point operator- (Point& p);
	Point operator* (Point& p);
	Point operator/ (Point& p);
	Point& operator+= (Point& p);
	Point& operator-= (Point& p);
	Point& operator*= (Point& p);
	Point& operator/= (Point& p);
};