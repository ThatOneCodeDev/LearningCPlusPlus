#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "Hello World";
	// print first and last characters.
	cout << str[0] << str.at(str.length() - 1) << endl;

	/// <summary>
	/// Loop through string and print each character.
	/// </summary>
	for (int i = 0; i < str.length(); ++i) {
		// Could use str.at(i);
		cout << str[i] << endl;
	}
	// reference each char in string and convert.
	for (char& p : str) {
		//cout << p << ", ";
		// convert to uppercase via ascii comparison.
		if (p >= 'a' && p <= 'z') {
			p -= 32;
		}
	}
	cout << str << endl;
	return 0;
}

