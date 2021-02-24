#include <iostream>

int main() {

	int num{ 0 };
	int sum{ 0 };

	std::cout << "Enter any number (0 to terminate): " << std::endl;
	std::cin >> num;
	int counter{ 0 };
	while (num != 0) {
		sum += num;
		counter++;
		std::cout << "Counter: " << counter << std::endl;
		std::cout << "Enter any number (0 to terminate): " <<  std::endl;
		std::cin >> num;
	}

	std::cout << "The sum of all the numbers is: " << sum << std::endl;
	double avg = (double)sum / counter;
	std::cout << "The Average of all the numbers is: " << avg << std::endl;

	return 0;
}