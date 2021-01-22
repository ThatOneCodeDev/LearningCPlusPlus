#include <iostream>

int main() {


	int a = 10;
	int b = 20;
	// Example of shortcut operators:
	a = a + b;
	a += b;
	a *= b;
	a /= b;
	a %= b;
	std::cout << "a = " << a;
	return 0;
}