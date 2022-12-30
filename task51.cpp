#include <iostream>

using namespace std;

int main() {
	float num1, num2;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "The result is: " << tan(num2) - abs(num1 - 3 * num2 + 2 / sqrt(num2 + 4)) << "\n\n";
	cout << "Press Enter to exit";
	cin.get();
	cin.get();
	return 0;
}