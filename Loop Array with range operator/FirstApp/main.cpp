#include <iostream>
using namespace std;

const int array_size = 5;

int main() {
	int a[] = { 10, 20, 30, 40, 50, 69 };
	
	// p iterates for each element in a.
	// passing reference to p.
	for (int &p : a) {
		// double each value
		p *= 2;
	}
	// for each item in p cout the value.
	for (int p : a) {
		cout << p << " ";
	}
	return 0;
}

