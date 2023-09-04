// Lab 7: IntegerSet.h
// Header file for class IntegerSet
#ifndef INTEGER_SET_H
#define INTEGER_SET_H

class IntegerSet 
{
public:  
   // default constructor
   IntegerSet() 
   { 
      /* Write call to emptySet */
       emptySet();
   } // end IntegerSet constructor

   IntegerSet( int [], int ); // constructor that takes an initial set
   IntegerSet unionOfSets( const IntegerSet& );
   /* Write a member funcion prototype for intersectionOfSets */
   IntegerSet intersectionOfSets(const IntegerSet&);
   void emptySet(); // set all elements of set to 0
   void inputSet(); // read values from user
   void insertElement( int );
   /* Write a member function prototype for deleteElement */
   void deleteElement(int num);
   void printSet() const;
   /* Write a member function prototype for isEqualTo */
   bool isEqualTo(const IntegerSet& r) const;
private:
   int set[ 101 ]; // range of 0 - 100

   // determines a valid entry to the set
   int validEntry( int x ) const 
   { 
      return ( x >= 0 && x <= 100 ); 
   } // end function validEntry
}; // end class IntegerSet

#endif

