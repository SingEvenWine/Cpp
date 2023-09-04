// Fig. 10.9: fig10_09.cpp
// Array class test program.
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray chessBorard1(15,3,5);
    chessBorard1(1, 4) = 10;
    chessBorard1(2, 4) = 20;
    cout << chessBorard1 << endl;
    DoubleSubscriptedArray chessBorard2(15,3,5);
    chessBorard2(1, 5) = 10;
    chessBorard2(2, 4) = 20;
    if (chessBorard1 == chessBorard2) {
        cout << "相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }
    chessBorard2 = chessBorard1;
    if (chessBorard1 == chessBorard2) {
        cout << "相等" << endl;
    }
    else
    {
        cout << "不相等" << endl;
    }
    return 0;
} // end main

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
