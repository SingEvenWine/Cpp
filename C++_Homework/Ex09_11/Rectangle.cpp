#include "Rectangle.h"
Rectangle::Rectangle(double m_length,double m_width) {
	setLength(m_length);
	setWidth(m_width);
}
void Rectangle::setLength(double m_length) {
	if (m_length > 0 && m_length < 20) {
		length = m_length;
	}
	else
	{
		cout << "Please enter a floating point number between 0.0 and 20.0" << endl;
	}
}
void Rectangle::setWidth(double m_width) {
	if (m_width > 0 && m_width < 20) {
		width = m_width;
	}
	else
	{
		cout << "Please enter a floating point number between 0.0 and 20.0" << endl;
	}
}
double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() {
	return width;
}
double Rectangle::getPerimeter() {
	return 2 * (length + width);
}
double Rectangle::getArea() {
	return length * width;
}