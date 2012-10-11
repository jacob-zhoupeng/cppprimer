#include <iostream>

#include "IntArray.h"
#include "IntArrayRC.h"

using namespace std;

extern void swap(IntArray& iar, int i, int j);

int main(void) {
	int array[4] = { 0, 1, 2, 3 };
	IntArray ia1(array, 4);
	IntArray ia2(array, 4);

	// Error: off-by-one
	// IntArray can't capture this error
	cout << "swap() with IntArray ia1\n";
	swap(ia1, 1, ia1.size());

	// OK: IntArrayRC captures off-by-one error
	cout << "swap() with IntArrayRC ia2\n";
	swap(ia2, 1, ia2.size());

	return 0;
}

void swap(IntArray& ia, int i, int j) {
	int tmp = ia[i];
	ia[i] = ia[j];
	ia[j] = tmp;
}
