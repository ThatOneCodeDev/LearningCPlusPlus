#include <iostream>
using namespace std;

/// <summary>
/// Takes in pointer of the array and number of slots in the array.
/// Additionally you could just put array in params.
/// </summary>
/// <param name="p"></param>
/// <param name="n"></param>
void printArray(int* p, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(p + i) << " ";
	}
}

int main() {
	int a[5] = { 10, 20, 30, 40, 50 };
	printArray(a, 5);

	return 0;
}

