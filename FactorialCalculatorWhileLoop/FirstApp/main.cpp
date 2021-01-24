#include <iostream>

int main() {

	int n;
	long fact = 1;

	std::cout << "Enter a number: ";
	std::cin >> n;
	if (n < 0) {
		std::cout << "unable to find the factorial of a negative number" << std::endl;
		return 0;
	}

	int i = n;
	while(i >= 1) {
		fact = fact * i;
		--i;
	}
	std::cout << "Factorial is: " << fact << std::endl;


	return 0;
}