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
	std::cout << "size of pointer p: " << sizeof(p) << std::endl;
	char* k;
	std::cout << "Size of pointer k: " << sizeof(k) << std::endl;
	std::cout << "Size of k: " << sizeof(*k) << std::endl;
	double* d;
	std::cout << "Size of d: " << sizeof(*d) << std::endl;

	return 0;
}

