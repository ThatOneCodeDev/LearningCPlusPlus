#include <iostream> // Input Output Libs: Used to input and output to the console.

int main(){
    // Declare variable:
    int favoriteNumber;

    // Output text to the console:
    std::cout << "Enter your favorite number between 1 and 100: ";

    // Get input from the user and store it in the previously initialized variable:
    std::cin >> favoriteNumber;

    // Output text to the console:
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;

    // The exit code of our program:
    return 0;
}
