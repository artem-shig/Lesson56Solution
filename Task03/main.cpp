#include "logic.h"

int main() {

	int arr1[]{ 1,2,3,4,5,6,7,8,9 };
	int arr2[]{ 1,2,3,4,5,6,7,8 };
	int arr3[]{ 1 };

	cout << (sum_all_elements(arr1, 9) == 45 ? "\tpass" : "\tfail") << endl;
	cout << (sum_all_elements(arr2, 8) == 36 ? "\tpass" : "\tfail") << endl;
	cout << (sum_all_elements(arr3, 1) == 1 ? "\tpass" : "\tfail") << endl;

	return 0;
}