#include "logic.h"

int main() {

	cout << "Power.\n";

	double x;
	cout << "Enter your number(x): ";
	cin >> x;

	int n;
	do {
		cout << "Enter your n: ";
		cin >> n;
	} while (n < 0);

	cout << x << "^" << n << " = " << power(x, n) << endl;


	return 0;
}