#include <iostream>
using namespace std;

template<typename T>
bool isEqualTo(T a, T b) {
	if (a == b)
		return true;
	else
		return false;
}


int main() {
	if (isEqualTo(1, 2))
		cout << "a=b\n";
	else
		cout << "a!=b\n";
	if (isEqualTo(1.1, 1.1))
		cout << "a=b\n";
	else
		cout << "a!=b\n";
	return 0;
}