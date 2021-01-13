#include "binarySearch.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

	BinarySearch B;

	vector<int> input = {1, 2, 3, 4, 5, 6, 7};
	int output = B.find(input, 9);

	cout << output << endl;

	return 0;
}
