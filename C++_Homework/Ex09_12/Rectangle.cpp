#include "Rectangle.h"

Rectangle::Rectangle(Point A, Point B, Point C, Point D) {
	if (check(A,B,C,D)) {
		if (square(A, B, C, D)) {
			setPoint(A, B, C, D);
		}
		else
		{
			cout << "Can't form a rectangle\n";
		}
	}
	else
	{
		cout<<"Please enter a floating point number from 0-20\n";
	}
}
bool Rectangle::check(Point a, Point b, Point c, Point d) {
	return ((a.getX() > 0 && a.getX() < 20) && (a.getY() > 0 && a.getY() < 20)
		&& (a.getX() > 0 && a.getX() < 20) && (a.getY() > 0 && a.getY() < 20)
		&& (a.getX() > 0 && a.getX() < 20) && (a.getY() > 0 && a.getY() < 20)
		&& (a.getX() > 0 && a.getX() < 20) && (a.getY() > 0 && a.getY() < 20)) ? true : false;
}
void Rectangle::setPoint(Point A, Point B, Point C, Point D) {
	a = A;
	b = B;
	c = C;
	d = D;
}


double Rectangle::distance(Point first,Point last) {
	double a, b, c;
	a = first.getX() - last.getX();
	b = first.getY() - last.getY();
	c = sqrt(a * a + b * b);
	return c;
}

double Rectangle::getLength() {
	if (distance(a, b) > distance(a, c) && distance(a, b) > distance(a, d)) {
		return distance(a, c) > distance(a, d) ? distance(a, c) : distance(a, d);
	}
	else if(distance(a, c) > distance(a, b) && distance(a, c) > distance(a, d)) {
		return distance(a, b) > distance(a, d) ? distance(a, b) : distance(a, d);
	}
	else if (distance(a, d) > distance(a, c) && distance(a, d) > distance(a, b)) {
		return distance(a, b) > distance(a, c) ? distance(a, b) : distance(a, c);
	}
}
double Rectangle::getWidth() {
	if (distance(a, b) > distance(a, c) && distance(a, b) > distance(a, d)) {
		return distance(a, c) < distance(a, d) ? distance(a, c) : distance(a, d);
	}
	else if (distance(a, c) > distance(a, b) && distance(a, c) > distance(a, d)) {
		return distance(a, b) < distance(a, d) ? distance(a, b) : distance(a, d);
	}
	else if (distance(a, d) > distance(a, c) && distance(a, d) > distance(a, b)) {
		return distance(a, b) < distance(a, c) ? distance(a, b) : distance(a, c);
	}
}
double Rectangle::getArea() {
	return getLength() * getWidth();
}
double Rectangle::getPerimeter() {
	return 2 * (getWidth() + getLength());
}

bool Rectangle::square(Point A, Point B, Point C, Point D) {
	Point mid(((A.getX() + B.getX() + C.getX() + D.getX()) / 4), ((A.getY() + B.getY() + C.getY() + D.getY()) / 4));
	return ((distance(A, mid) == distance(B, mid)) && (distance(B, mid) == distance(C, mid)) && (distance(C, mid) == distance(D, mid))) ? true : false;
}