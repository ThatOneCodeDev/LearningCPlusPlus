#include <iostream>

int GetArea(int num1, int num2){
    return num1 * num2;
}

int main(){
    //Optionally declare variables near where they are used first to make code cleaner.
    int roomWidth {0};
    int roomLength {0};
    int roomArea {0};

    std::cout << "Enter the width of the room: " << std::endl;
    std::cin >> roomWidth;

    std::cout << "Enter the room width: " << std::endl;
    std::cin >> roomLength;

    roomArea = GetArea(roomLength, roomWidth);

    std::cout << "The area of the room is: " << roomArea << std::endl;

    return 0;
}