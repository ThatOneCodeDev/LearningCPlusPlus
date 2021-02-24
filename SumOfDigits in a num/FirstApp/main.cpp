#include <iostream>
#include <cmath>

int main() {

	int num{ 0 };

	std::cout << "Enter any number: " << std::endl;
	std::cin >> num;

	num = abs(num);

	int sum{ 0 };
	int rem{ 0 };

	while (num > 0) {
		rem = num % 10;
		sum += rem; // sum = sum + rem;
		num = num / 10;
	}
	std::cout << "Sum of digits: " << sum << std::endl;

	return 0;
}