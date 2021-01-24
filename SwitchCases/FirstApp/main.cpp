#include <iostream>

int main() {

	int num1;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num1;

	switch (num1) {
		case 1: std::cout << "One" << std::endl;
			break;
		case 2: std::cout << "Two" << std::endl;
			break;
		case 3: std::cout << "Three" << std::endl;
			break;
		default: std::cout << "Unexpected number..." << std::endl;
			break;
	}

	//if (num1 == 1) {
	//	std::cout << "One" << std::endl;
	//}
	//else if (num1 == 2) {
	//	std::cout << "Two" << std::endl;
	//}
	//else if (num1 == 3) {
	//	std::cout << "Three" << std::endl;
	//}
	//else {
	//	std::cout << "Unexpected number..." << std::endl;
	//}

	return 0;
}