#include <iostream>

using namespace std;

int main() {
	int code;
	char ch;
	cout << "Type character and press Enter: ";
	cin >> ch;
	code = (int)ch;
	cout << "ASCII-code is: " << code << "\n";
	cout << "The previous character is: " << (char)(code - 1) << "\n";
	cout << "The next character is: " << (char)(code + 1) << "\n\n";
	cout << "Press Enter to exit";
	cin.get();
	cin.get();
	return 0;
}