#include "logic.h"

int sum_all_elements(int* arr, int size) {

	if (arr == nullptr || size < 0) {
		return 0;
	}

	if (size == 1) {
		return arr[0];
	}

	return arr[size - 1] + sum_all_elements(arr, size - 1);
}