#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(double m_length,double m_width);
	~Rectangle(){}
	void setLength(double m_length);
	double getLength();
	void setWidth(double m_width);
	double getWidth();
	double getPerimeter();
	double getArea();
private:
	double length = 0;
	double width = 0;
};