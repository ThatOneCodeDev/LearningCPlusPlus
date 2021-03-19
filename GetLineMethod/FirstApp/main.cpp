#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	cout << "Enter your name: " << endl;
	// This suffices for one word however for multiple words getline is needed.
	//cin >> name;
	// Getline gets content from cin and inputs to name var
	getline(cin, name);
	cout << "Welcome: " << name << endl;
	return 0;
}

