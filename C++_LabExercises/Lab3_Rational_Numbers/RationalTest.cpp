// Lab 3: RationalTest.cpp
// RationalNumber test program.
#include <iostream> 
using namespace std;

#include "RationalNumber.h"

int main()
{
   RationalNumber c( 7, 3 ), d( 3, 9 ), x;

   cout << c;
   cout << " + ";
   cout << d;
   cout << " = ";
   x = c + d; // test overloaded operators + and =
   cout << x;

   cout << '\n';
   cout << c;
   cout << " - ";
   cout << d;
   cout << " = ";
   x = c - d; // test overloaded operators - and =
   cout << x;

   cout << '\n';
   cout << c;
   cout << " * ";
   cout << d;
   cout << " = ";
   x = c * d; // test overloaded operators * and =
   cout << x;

   cout << '\n';
   cout << c;
   cout << " / ";
   cout << d;
   cout << " = ";
   x = c / d; // test overloaded operators / and =
   cout << x;

   cout << '\n';
   cout << c;
   cout << " is:\n";

   // test overloaded greater than operator
   cout << ( ( c > d ) ? "  > " : "  <= " );
   cout << d;
   cout << " according to the overloaded > operator\n";

   // test overloaded less than operator
   cout << ((c < d) ? "  < " : "  >= ");
   cout << d;
   cout << " according to the overloaded < operator\n";

   // test overloaded greater than or equal to operator
   cout << ( ( c >= d ) ? "  >= " : "  < " );
   cout << d;
   cout << " according to the overloaded >= operator\n";

   // test overloaded less than or equal to operator
   cout << ( ( c <= d ) ? "  <= " : "  > " );
   cout << d;
   cout << " according to the overloaded <= operator\n";
   
   // test overloaded equality operator
   cout << ( ( c == d ) ? "  == " : "  != " );
   cout << d;
   cout << " according to the overloaded == operator\n";

   // test overloaded inequality operator
   cout << ( ( c != d ) ? "  != " : "  == " );
   cout << d;
   cout << " according to the overloaded != operator" << endl;
} // end main


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
