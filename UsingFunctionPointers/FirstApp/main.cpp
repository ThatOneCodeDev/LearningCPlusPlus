#include <iostream>

// passing pointers to functions.
// Could use reference parameter: void fun(int value1, int value2) {
// Or use a pointer.
void fun(int* value1, int* value2) {
	// De-reference before assigning value
	// Content is being changed from original location.
	*value1 = *value1 + 10;
	std::cout << "Value1: " << *value1 << std::endl;
	*value2 = *value2 + 5;
	std::cout << "Value2: " << *value2 << std::endl;
}

int main() {
	int a{ 10 };
	int b{ 20 };
	fun(&a, &b);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	return 0;
}

