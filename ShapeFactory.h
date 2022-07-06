#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <list>

//- Shape * createShape(int type, const string & s); = > tạo 1 shape với type Triangle / Rectangle...
//- List<Shape*> readShapesFromFile(const string & filename) = > tạo list các shape bằng cách đọc data từ file, mỗi dòng trong file là 1 Shape
//- void saveShapesToFile(const string & filename, const List<Shape*> &shapes) = > write list shapes ra file theo format giống khi đọc.
//* Sử dụng class ShapeFactory để đọc và write list các shape từ file.Log ra diện tích và chu vi của mỗi shape đc đọc từ file.

class ShapeFactory : public Shape {
public:
	Shape* createShape(int type, const string& s);
	list<Shape*> readShapesFromFile(const string& filename);
	void saveShapesToFile(const string& filename, const list<Shape*>& shapes);
};