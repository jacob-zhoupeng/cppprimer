#include <iostream>

#include "IntArray.h"

using namespace std;

int main(void) {
	int initArray[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	IntArray myArray(initArray, 10);
	IntArray myArray2(initArray, 8);

	cout << "myArray == myArray2: " << (myArray == myArray2) << endl;
	cout << "myArray != myArray2: " << (myArray != myArray2) << endl;

	for (int ii = 0; ii < myArray.size(); ii++) {
		cout << "myArray[" << ii << "]: " << myArray[ii] << endl;
	}

	myArray.sort();

	cout << "After sort:" << endl;
	for (int ii = 0; ii < myArray.size(); ii++) {
		cout << "myArray[" << ii << "]: " << myArray[ii] << endl;
	}

	return 0;
}
