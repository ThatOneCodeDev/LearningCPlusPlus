#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "peace is my goal and program is peace";
	// first param is start index, second param is amount to delete.
	//str.erase(11, 5);
	str.erase(str.begin() + 12, str.end() - 5);
	cout << str << endl;
	return 0;
}

