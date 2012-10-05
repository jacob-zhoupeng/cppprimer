#ifndef INT_ARRAY_H
#define INT_ARRAY_H

class IntArray {
public:
	explicit IntArray(int sz = DefaultArraySize);
	IntArray(int* array, int array_size);
	IntArray(const IntArray& rhs);
	~IntArray();

	bool operator==(const IntArray&) const;
	bool operator!=(const IntArray&) const;

	int& operator[](int index);

	IntArray& operator=(const IntArray&);

	int size() const {
		return _size;
	}

	void sort();

	int min() const;
	int max() const;

	int find(int value) const;
private:
	static const int DefaultArraySize = 12;
	int _size;
	int* ia;

	void init(int sz, int* array);
};

#endif // INT_ARRAY_H
