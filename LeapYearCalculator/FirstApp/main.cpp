#include <iostream>

int main() {

	int year;
	std::wcout << "Enter a year: ";
	std::cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		std::wcout << "The year " << year << " is a leap year" << std::endl;
	}
	else {
		std::wcout << "The year " << year << " is not a leap year" << std::endl;
	}

	// More complex way of doing it, includes nested if statements.
	//if (year % 4 == 0) {
	//	// we need to test whether the year is divisible by 100.
	//	if (year % 100 == 0) {
	//		if (year % 400 == 0) {
	//			std::wcout << "The year " << year << " is a leap year" << std::endl;
	//		}
	//		else {
	//			std::wcout << "The year " << year << " is not a leap year" << std::endl;
	//		}
	//	}
	//	else {
	//		std::wcout << "The year " << year << " is a leap year" << std::endl;
	//	}
	//}
	//else {
	//	std::wcout << "The year " << year << " is not a leap year" << std::endl;
	//}


	return 0;
}