#include <iostream>
#include <typeinfo>

int main() {

	int first{ 10 }; // Could declare both as a double.
	int second{ 20 }; // Alternatively could cast to a double.
	double result;

	result = (double)first / second; // Explicitly casted to double
	std::cout << "Result: " << result << std::endl;

	return 0;
}