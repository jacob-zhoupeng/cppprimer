#include <climits> // For INT_MIN & INT_MAX

#include "Array.h"

template<class elemType>
Array<elemType>::Array(const int sz) {
    init(sz, 0);
}

template<class elemType>
Array<elemType>::Array(const elemType* array, const int sz) {
	init(sz, array);
}

template<class elemType>
Array<elemType>::Array(const Array<elemType>& rhs) {
	init(rhs.size(), rhs.ia);
}

template<class elemType>
void Array<elemType>::init(const int sz, const elemType* array) {
	_size = sz;
	ia = new elemType[_size];

	for (int ii = 0; ii < _size; ii++) {
		if (!array) {
			ia[ii] = 0;
		} else {
			ia[ii] = array[ii];
		}
	}
}

template<class elemType>
Array<elemType>& Array<elemType>::operator=(const Array<elemType>& rhs) {
	_size = rhs.size();
	for (int ii = 0; ii < _size; ii++) {
		ia[ii] = rhs.ia[ii];
	}

	return *this;
}

template<class elemType>
bool Array<elemType>::operator==(const Array& rhs) const {
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

template<class elemType>
bool Array<elemType>::operator!=(const Array<elemType>& rhs) const {
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

template<class elemType>
void Array<elemType>::sort() {
	for (int ii = 0; ii < _size; ii++) {
		for (int kk = ii; kk < _size; kk++) {
			if (ia[ii] > ia[kk]) {
				elemType temp = ia[ii];
				ia[ii] = ia[kk];
				ia[kk] = temp;
			}
		}
	}
}

template<class elemType>
elemType Array<elemType>::min() const {
	elemType min = INT_MAX;
	for (int ii = 0; ii < _size; ii++) {
		if (ia[ii] < min) {
			min = ia[ii];
		}
	}
	return min;
}

template<class elemType>
elemType Array<elemType>::max() const {
	elemType max = INT_MIN;
	for (int ii = 0; ii < _size; ii++) {
		if (ia[ii] > max) {
			max = ia[ii];
		}
	}
	return max;
}

template<class elemType>
int Array<elemType>::find(const elemType& value) const {
	int index = -1;
	for (int ii = 0; ii < _size; ii++) {
		if (value == ia[ii]) {
			index = ii;
			break;
		}
	}

	return index;
}

