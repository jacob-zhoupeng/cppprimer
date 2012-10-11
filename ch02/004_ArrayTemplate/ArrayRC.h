#ifndef ARRAYRC_H
#define ARRAYRC_H

#include <cassert>

#include "Array.h"

template<class elemType>
class ArrayRC : public Array<elemType> {
public:
    ArrayRC(int sz = Array<elemType>::DefaultArraySize) 
        : Array<elemType>(sz) {}

    ArrayRC(elemType* ia, int sz) : Array<elemType>(ia, sz) {}

    ArrayRC(const ArrayRC& rhs) : Array<elemType>(rhs) {}

    virtual elemType& operator[](int index);
};

#endif // ARRAYRC_H