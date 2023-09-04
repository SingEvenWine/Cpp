#include <iostream>
#include <iomanip>
#include <stdexcept> 

#include "DoubleSubscriptedArray.h"
using namespace std;

void DoubleSubscriptedArray::setColumns(int Columns) {
    columns = Columns;
}
void DoubleSubscriptedArray::setRows(int Rows) {
    rows = Rows;
}
int DoubleSubscriptedArray::getColumns() {
    return columns;
}
int DoubleSubscriptedArray::getRows() {
    return rows;
}
istream& operator>>(istream& input, DoubleSubscriptedArray& a)
{
    for (size_t i = 0; i < a.size; ++i)
        input >> a.ptr[i];

    return input; // enables cin >> x >> y;
} // end function 
ostream& operator<<(ostream& output, const DoubleSubscriptedArray& a)
{
    // output private ptr-based array 
    for (size_t i = 0; i < a.size; ++i)
    {
        output << setw(a.columns * a.rows) << a.ptr[i];

        if ((i + 1) % a.columns == 0) // 4 numbers per row of output
            output << endl;
    } // end for

    if (a.size % a.columns != 0) // end last line of output
        output << endl;

    return output; // enables cout << x << y;
} // end function operator<<
DoubleSubscriptedArray::DoubleSubscriptedArray(int arraySize,int Rows,int Columuns) : size(arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")), ptr(new int[size])
{
    for (size_t i = 0; i < size; ++i)
        ptr[i] = 0; // set pointer-based array element
    setRows(Rows);
    setColumns(Columuns);
} // end Array default constructor
const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& right)
{
    if (&right != this) // avoid self-assignment
    {
        // for Arrays of different sizes, deallocate original
        // left-side Array, then allocate new left-side Array
        if (size != right.size)
        {
            delete[] ptr; // release space
            size = right.size; // resize this object
            ptr = new int[size]; // create space for Array copy
        } // end inner if

        for (size_t i = 0; i < size; ++i)
            ptr[i] = right.ptr[i]; // copy array into object
    } // end outer if

    return *this; // enables x = y = z, for example
} // end function operator=
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray& right) const
{
    if (size != right.size)
        return false; // arrays of different number of elements

    for (size_t i = 0; i < size; ++i)
        if (ptr[i] != right.ptr[i])
            return false; // Array contents are not equal

    return true; // Arrays are equal
} // end function operator==
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray& arrayToCopy) : size(arrayToCopy.size), ptr(new int[size])
{
    for (size_t i = 0; i < size; ++i)
        ptr[i] = arrayToCopy.ptr[i]; // copy into object
    int a, b;
    cin >> a >> b;
    setRows(a);
    setColumns(b);
} // end Array copy constructor
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete[] ptr; // release pointer-based array space
} // end destructor
size_t DoubleSubscriptedArray::getSize() const
{
    return size; // number of elements in Array
} // end function getSize
int& DoubleSubscriptedArray::operator()(int subscript1, int subscript2){
    if ((subscript1 < 0 || subscript1 >= size) || (subscript2 < 0 || subscript2 >= size))
        throw out_of_range("Subscript out of range");
    return ptr[(subscript1 - 1) * columns + subscript2 - 1];
}