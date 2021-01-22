#include <iostream>
#include <iomanip>

int main() {

	double income, tax;
	std::wcout << "Enter your income: ";
	std::wcin >> income;

	if (income < 0) {
		std::wcout << "Income entered was invalid!" << std::endl;
		return 0;
	}

	if (income >= 0 && income < 5000) {
		tax = 0.0;
	}
	else if (income >= 5000 && income < 10000) {
		tax = income * 0.06;
	}
	else if (income >= 10000 && income < 20000) {
		tax = income * 0.12;
	}
	else if (income >= 20000 && income < 50000) {
		tax = income * 0.2;
	}
	else {
		tax = income * 0.3;
	}

	std::wcout << "Tax: $" << std::setprecision(2) << std::fixed << tax << std::endl;

	return 0;
}