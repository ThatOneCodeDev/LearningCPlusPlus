#include <iostream>

int main() {

	int a, b, c, max;

	std::cout << "Input First number ";
	std::cin >> a;

	std::cout << "Input Second number ";
	std::cin >> b;

	std::cout << "Input Third number ";
	std::cin >> c;
	
	
	/*
	if (a > b) {
		result = a + b;
	}
	else {
		result = a - b;
	}*/
	// Usage of conditional operator:
	// Simple else if: result = (a > b) ? a + b : a - b;
	max = (a > b && a > c) ? a : (b > c ? b : c); // Second Brackets are optional
	std::cout << max << std::endl;

	return 0;
}