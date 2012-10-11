#include <climits> // For INT_MIN & INT_MAX

#include "IntArray.h"

IntArray::IntArray(int sz) {
	init(sz, 0);
}

IntArray::IntArray(const int* array, int sz) {
	init(sz, array);
}

IntArray::IntArray(const IntArray& rhs) {
	init(rhs.size(), rhs.ia);
}

IntArray::~IntArray() {
	delete[] ia;
}

void IntArray::init(int sz, const int* array) {
	_size = sz;
	ia = new int[_size];

	for (int ii = 0; ii < _size; ii++) {
		if (!array) {
			ia[ii] = 0;
		} else {
			ia[ii] = array[ii];
		}
	}
}

IntArray& IntArray::operator=(const IntArray& rhs) {
	_size = rhs.size();
	for (int ii = 0; ii < _size; ii++) {
		ia[ii] = rhs.ia[ii];
	}

	return *this;
}

int& IntArray::operator[](int index) {
	return ia[index];
}

bool IntArray::operator==(const IntArray& rhs) const {
	if (_size != rhs.size()) {
		return false;
	}

	for (int ii = 0; ii < _size;  ii++) {
		if (ia[ii] != rhs.ia[ii]) {
			return false;
		}
	}

	return true;
}

bool IntArray::operator!=(const IntArray& rhs) const {
	if (_size != rhs.size()) {
		return true;
	}

	for (int ii = 0; ii < _size;  ii++) {
		if (ia[ii] == rhs.ia[ii]) {
			return false;
		}
	}

	return true;
}

void IntArray::sort() {
	for (int ii = 0; ii < _size; ii++) {
		for (int kk = ii; kk < _size; kk++) {
			if (ia[ii] > ia[kk]) {
				int temp = ia[ii];
				ia[ii] = ia[kk];
				ia[kk] = temp;
			}
		}
	}
}

int IntArray::min() const {
	int min = INT_MAX;
	for (int ii = 0; ii < _size; ii++) {
		if (ia[ii] < min) {
			min = ia[ii];
		}
	}
	return min;
}

int IntArray::max() const {
	int max = INT_MIN;
	for (int ii = 0; ii < _size; ii++) {
		if (ia[ii] > max) {
			max = ia[ii];
		}
	}
	return max;
}

int IntArray::find(int value) const {
	int index = -1;
	for (int ii = 0; ii < _size; ii++) {
		if (value == ia[ii]) {
			index = ii;
			break;
		}
	}

	return index;
}
