#include "logic.h"

bool equals(int first, int second) {
	if (second < 0) {
		false;
	}

	first = first < 0 ? -first : first;

	if (first == second) {
		return true;
	}

	if (first == 0 || second == 0) {
		return false;
	}

	int digit = first % 10;

	return equals(first / 10, second - digit);
}