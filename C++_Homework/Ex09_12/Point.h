#pragma once
class Point
{
public:
	Point() {
	}
	Point(double x,double y);
	void setX(double x);
	double getX();
	void setY(double y);
	double getY();
private:
	double x;
	double y;
};
