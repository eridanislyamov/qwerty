#include <iostream>

using namespace std;

int main() {
	char a[4], b[4], c[7] = {};
	cout << "Enter the 1-st string: ";
	cin >> a;
	cout << "Enter the 2-nd string: ";
	cin >> b;
	for (int i = 0; i < 3; i++) {
		c[i] = a[i];
		c[i + 3] = b[i];
	}
	cout << "The result is: " << c;
	cin.get();
	cin.get();
	return 0;
}