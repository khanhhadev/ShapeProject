#include "ShapeFactory.h"
#include <fstream> 
#include <string>


Shape* ShapeFactory::createShape(int type, const string& s)
{
	Shape* ShapeObj = nullptr;
	switch (type)
	{
	case 0:
		ShapeObj = new Triangle;
		ShapeObj->fromString(s);
		break;
	case 1:
		ShapeObj = new Rectangle;
		ShapeObj->fromString(s);
		break;
	case 2:
		ShapeObj = new Circle;
		ShapeObj->fromString(s);
		break;
	case 3:
		ShapeObj = new Ellipse;
		ShapeObj->fromString(s);
		break;
	default:
		break;
	}
	return ShapeObj;
};
list<Shape*> ShapeFactory::readShapesFromFile(const string& filename)
{
	list<Shape*> C;
	ifstream FileDemo(filename); 
	if (FileDemo.is_open())
	{
		string line;
		while (getline(FileDemo, line))
		{
			string type = line.substr(0, 1);
			C.push_back(createShape(toInt(type), line.substr(2, line.length() - 2)));
		}
		FileDemo.close();
	}
	return C;
};
void ShapeFactory::saveShapesToFile(const string& filename, const list<Shape*>& shapes)
{
	ofstream FileDemo(filename);
	for (Shape* itr : shapes)
	{
		FileDemo << itr->toString() << "\n";
	}
	FileDemo.close();
};