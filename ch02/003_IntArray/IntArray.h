#ifndef INT_ARRAY_H
#define INT_ARRAY_H

class IntArray {
public:
	// Constructor
	explicit IntArray(int sz = DefaultArraySize);
	IntArray(const int* array, int array_size);
	IntArray(const IntArray& rhs);
	
	// Virtual destructor
	virtual ~IntArray();

	// Equal & Not equal
	bool operator==(const IntArray&) const;
	bool operator!=(const IntArray&) const;

	// Equal asignment operator
	IntArray& operator=(const IntArray&);

	int size() const {
		return _size;
	}

	// Without index range checked
	virtual int& operator[](int index);
	
	virtual void sort();
	virtual int min() const;
	virtual int max() const;
	virtual int find(int value) const;
protected:
	static const int DefaultArraySize = 12;
	int _size;
	int* ia;

	void init(int sz, const int* array);
};

#endif // INT_ARRAY_H
