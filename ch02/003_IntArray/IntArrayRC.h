#ifndef IntArrayRC_H
#define IntArrayRC_H

#include "IntArray.h"

class IntArrayRC : public IntArray {
public:
	IntArrayRC(int sz = DefaultArraySize);
	IntArrayRC(const int* array, int array_size);
	IntArrayRC(const IntArrayRC& rhs);

	// Check index reange
	virtual int& operator[](int index);
private:
	void check_range(int index);
};

#endif
