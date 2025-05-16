#include "logic.h"

int main() {

	int first, second;
	cout << "Enter yout first number: ";
	cin >> first;

	do {
		cout << "Enter yout second number: ";
		cin >> second;
	} while (second < 0);

	cout << "Result: " << (equals(first, second) ? "YES." : "NO.") << endl;

	return 0;
}