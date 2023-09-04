// Lab 3: RationalNumber.cpp
// RationalNumber member-function definitions.
#include <cstdlib>
#include <iostream> 
using namespace std;

#include "RationalNumber.h"

// RationalNumber constructor sets n and d and calls reduction
/* Implement the RationalNumber constructor. Validate d first to ensure that
   it is a positive number and set it to 1 if not. Call the reduction utility
   function at the end */
RationalNumber::RationalNumber(int n, int d) {
    this->numerator = n;
    if (d > 0) {
        this->denominator = d;
    }
    else
    {
        this->denominator = 1;
    }
    this->reduction();
}

// overloaded + operator
/* Write definition for overloaded operator + */
RationalNumber RationalNumber::operator+(const RationalNumber& a)const {
    RationalNumber b;
    b.numerator = this->numerator * a.denominator + this->denominator * a.numerator;
    b.denominator = this->denominator * a.denominator;
    b.reduction();
    return b;
}


// overloaded - operator
/* Write definition for overloaded operator - */
RationalNumber RationalNumber::operator-(const RationalNumber& a)const {
    RationalNumber b;
    b.numerator = this->numerator * a.denominator - this->denominator * a.numerator;
    b.denominator = this->denominator * a.denominator;
    b.reduction();
    return b;
}
// overloaded * operator
/* Write definition for overloaded operator * */
RationalNumber RationalNumber::operator*(const RationalNumber& a)const {
    RationalNumber b;
    b.numerator = this->numerator * a.numerator;
    b.denominator = this->denominator * a.denominator;
    b.reduction();
    return b;
}
// overloaded / operator
/* Write definition for overloaded operator /. Check if the client is
   attempting to divide by zero and report an error message if so */
RationalNumber RationalNumber::operator/(const RationalNumber& a)const {
    RationalNumber b;
    if (this->denominator * a.denominator == 0) {
        cout << "error\n";
    }
    else
    {
        b.numerator = this->numerator * a.denominator;
        b.denominator = this->denominator * a.numerator;
        b.reduction();
        return b;
    }
    
}
// overloaded > operator
/* Write definition for operator > */
bool RationalNumber::operator>(const RationalNumber a)const {
    return this->numerator * a.denominator > this->denominator * a.numerator ? true : false;
}
// overloaded < operator
/* Write definition for operator < */
bool RationalNumber::operator<(const RationalNumber a)const {
    return this->numerator * a.denominator < this->denominator * a.numerator ? true : false;
}
// overloaded >= operator
/* Write definition for operator >= */
bool RationalNumber::operator>=(const RationalNumber a)const {
    return this->numerator * a.denominator >= this->denominator * a.numerator ? true : false;
}
// overloaded <= operator
/* Write definition for operator <= */
bool RationalNumber::operator<=(const RationalNumber a)const {
    return this->numerator * a.denominator <= this->denominator * a.numerator ? true : false;
}
// overloaded == operator
/* Write definition for operator == */
bool RationalNumber::operator==(const RationalNumber a)const {
    return this->numerator * a.denominator == this->denominator * a.numerator ? true : false;
}
// overloaded != operator
/* Write definition for operator != */
bool RationalNumber::operator!=(const RationalNumber a)const {
    return this->numerator * a.denominator != this->denominator * a.numerator ? true : false;
}
// function printRational definition
ostream& operator<<(ostream& out, RationalNumber& a)
{
    if (a.numerator == 0) // print fraction as zero
        out << a.numerator;
    else if (a.denominator == 1) // print fraction as integer
        out << a.numerator;
    else
        out << a.numerator << '/' << a.denominator;
    return out;
}

// function reduction definition
void RationalNumber::reduction()
{
   int largest, gcd = 1;  // greatest common divisor;

   largest = ( numerator > denominator ) ? numerator: denominator;

   for ( int loop = 2; loop <= largest; loop++ )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   numerator /= gcd;
   denominator /= gcd;
} // end function reduction


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/