// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
public:
	Complex() {};
	Complex(double real, double imaginary);
	void setComplexNumber(double rp, double ip);
	Complex add(const Complex& right);
	Complex subtract(const Complex& right);
	void printComplex();
	Complex operator+(const Complex& right) const;
	Complex operator-(const Complex& right) const;

private:
	double realPart;
	double imaginaryPart;
};

class NewComplex
{
public:
	NewComplex() {};
	NewComplex(double real, double imaginary);
	void setComplexNumber(double rp, double ip);
	NewComplex add(const NewComplex right) {
		return NewComplex(this->realPart + right.realPart, this->imaginaryPart + right.imaginaryPart);
	}
	NewComplex subtract(const NewComplex right) {
		return NewComplex(this->realPart - right.realPart, this->imaginaryPart - right.imaginaryPart);
	}
	void printComplex();
	NewComplex operator+(const NewComplex& right) const;
	NewComplex operator-(const NewComplex& right) const;

private:
	double realPart;
	double imaginaryPart;
};
#endif

