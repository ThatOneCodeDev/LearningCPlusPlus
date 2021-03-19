#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "Hello";
	string::iterator it = str.begin();
	while (it != str.end()) {
		cout << *it << ", ";
		++it;
	}

	return 0;
}

