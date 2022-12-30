#include <iostream>

using namespace std;

int main() {
	char st[6], ch;
	cout << "Type characters and press Enter: ";
	cin >> st;
	ch = st[0];
	st[0] = st[4];
	st[4] = st[2];
	st[2] = ch;
	cout << "The result is: " << st;
	cin.get();
	cin.get();
	return 0;
}