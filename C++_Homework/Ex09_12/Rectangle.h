#pragma once
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;
class Rectangle
{
public:
	Rectangle(Point a, Point b, Point c, Point d);
	void setPoint(Point a, Point b, Point c, Point d);
	double getLength();
	double getWidth();
	double getArea();
	double getPerimeter();
	double distance(Point first, Point Last);
	bool square(Point a, Point b, Point c, Point d);
	bool check(Point a, Point b, Point c, Point d);
private:
	Point a;
	Point b;
	Point c;
	Point d;
};
