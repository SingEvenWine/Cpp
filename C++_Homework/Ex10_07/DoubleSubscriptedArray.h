#pragma once
#include <iostream>
class DoubleSubscriptedArray
{
	friend std::ostream& operator<<(std::ostream&, const DoubleSubscriptedArray&);
	friend std::istream& operator>>(std::istream&, DoubleSubscriptedArray&);
public:
	DoubleSubscriptedArray(const DoubleSubscriptedArray&);
	~DoubleSubscriptedArray(); // destructor
	explicit DoubleSubscriptedArray(int = 100, int = 10, int = 10); // default constructor
	const DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray&); // assignment operator
	size_t getSize() const; // return size
	bool operator==(const DoubleSubscriptedArray&) const; // equality operator
	bool operator!=(const DoubleSubscriptedArray& right) const
	{
		return !(*this == right); // invokes Array::operator==
	} // end function operator!=
	int& operator()(int, int);
	int operator()(int, int) const;
	void setRows(int);
	void setColumns(int);
	int getRows();
	int getColumns();
private:
	int rows;
	int columns;
	size_t size; // pointer-based array size
	int* ptr; // pointer to first element of pointer-based array
};