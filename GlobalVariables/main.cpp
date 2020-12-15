#include <iostream>

int age {18}; // Example of a global variable.

int main(){
    int age {16}; // Compiler will use local variables first.

    std::cout << age << std::endl;

    return 0;
}