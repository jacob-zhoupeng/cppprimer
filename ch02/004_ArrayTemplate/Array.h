#ifndef ARRAY_H_
#define ARRAY_H_

template<class elemType>
class Array {
public:
    // Parameterized element type
    explicit Array(int size = DefaultArraySize);
    Array(const elemType* array, const int array_size);
    Array(const Array<elemType>& rhs);

    virtual ~Array() {
        delete[] ia;
    }

    bool operator==(const Array& rhs) const;
    bool operator!=(const Array& rhs) const;

    Array& operator=(const Array& rhs);

    int size() const {
        return _size;
    }

    virtual elemType& operator[](int index) {
        return ia[index];
    }
    
    virtual void sort();
    virtual elemType min() const;
    virtual elemType max() const;
    virtual int find(const elemType& value) const;
protected:
    static const int DefaultArraySize = 12;
    int _size;
    elemType* ia;

    void init(const int sz, const elemType* array);
};

#endif // ARRAY_H_