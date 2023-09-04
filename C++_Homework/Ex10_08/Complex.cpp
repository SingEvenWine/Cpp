// Fig. 10.15: Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include "Complex.h" // Complex class definition
using namespace std;



// Constructor
Complex::Complex( double realPart, double imaginaryPart ) 
   : real( realPart ),
   imaginary( imaginaryPart ) 
{ 
   // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real, 
      imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real, 
      imaginary - operand2.imaginary );
} // end function operator-

ostream& operator<<(ostream& out, const Complex& a)
{
    out << a.real << "+" << a.imaginary << "*i";
    return out;
}

istream& operator>>(istream& in, Complex& a)
{   
    in >> a.real >> a.imaginary;
    return in;
}

Complex operator*(const Complex& a, const Complex& b)
{
    return Complex((a.real * b.real) - (a.imaginary * b.imaginary), (a.imaginary * b.real) + (a.real * b.imaginary));
}

bool operator==(const Complex& a, const Complex& b)
{
    return ((a.real == b.real) && (a.imaginary == b.imaginary)) ? true : false;
}

bool operator!=(const Complex& a, const Complex& b)
{
    return ((a.real != b.real) || (a.imaginary != b.imaginary)) ? true : false;
}


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
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
