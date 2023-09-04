// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std; 

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook( "CS101 Introduction to C++ Programming","Sam Smith");
   // display welcome message and instructor's name
   gradeBook.displayMessage(); 
   /* write code to change instructor's name and output changes */
   cout << "\n\nChanging instructor name to ";
   string name;//creat a name variable to get new instructor's name
   getline(cin,name);//get new instructor's name
   cout << "\n";
   gradeBook.setInstructorName(name);//change instructor's name
   // display welcome message and instructor's name
   gradeBook.displayMessage();
} // end main
