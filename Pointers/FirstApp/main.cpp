#include <iostream>

int main() {

	int temp{ 300 };

	std::cout << "Address of temp: " << &temp << std::endl;
	int* p; // Declare int pointer variable
	// store address of temp in our pointer.
	p = &temp;
	
	// Use de-reference operator to get location of each byte in pointer
	std::cout << "temp de-refferenced: " << *p << std::endl;
	*p = *p + 1;
	std::cout << "temp: " << temp << std::endl;

	return 0;
}

