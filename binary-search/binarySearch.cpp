#include "binarySearch.h"

using namespace std;

int BinarySearch::find(vector<int> array, int target) {
	if (array.size() == 0)			// for an input size of 0
		return -1;					// no value == it's index so return -1

	int l = 0, r = array.size() - 1;
	while (l <= r) {				//
		int m = (l + r) / 2;		// m = middle of l and r (rounded down)

		if (array[m] == target)
			return m;
		else if (array[m] > target)	// 
			r = m + 1;				// bring right in
		else						// if the middle value is less than it's index
			l = m + 1;				// bring left in plus one
	}								// (as (m != target) so: the first instance can't be skipped)

	return -1;
}

int BinarySearch::findFirst(vector<int> array, int target) {

	if (array.size() == 0)			// for an input size of 0
		return -1;					// no value == it's index so return -1

	int l = 0, r = array.size() - 1;
	while (l < r) {					// until l == r
		int m = (l + r) / 2;		// m = middle of l and r (rounded down)

		if (array[m] >= target)		// if the middle value is above or equal to the target
			r = m;					// bring right in
		else						// if the middle value is less than it's index
			l = m + 1;				// bring left in plus one
	}								// (as (m != target) so: the first instance can't be skipped)

	if (array[l] == target)			// when l == r, if l == array[l]
		return l;					// we've found the first index where i == array[i]
	else							// else, there was no instace were i == array[i]
		return -1;					// so return -1
}

int BinarySearch::findLast(vector<int> array, int target) {

	if (array.size() == 0)			// for an input size of 0
		return -1;					// no value == it's index so return -1

	int l = 0, r = array.size() - 1;
	while (l < r) {					// until l == r
		int m = (l + r + 1) / 2;	// m = middle of l and r (rounded up)

		if (array[m] <= target)		// if the middle value is below or equal to the target
			l = m;					// ignore the left hand side
		else						// if the middle value is more than it's index
			r = m - 1;				// ignore the right hand side
	}

	if (array[l] == target)			// when l == r, if l == array[l]
		return l;					// we've found the first index where i == array[i]
	else							// else, there was no instace were i == array[i]
		return -1;					// so return -1
}
