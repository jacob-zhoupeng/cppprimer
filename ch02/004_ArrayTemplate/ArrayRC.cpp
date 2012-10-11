#include "ArrayRC.h"

template<class elemType>
elemType& ArrayRC<elemType>::operator[](int index) {
        assert(index >= 0 && index <= Array<elemType>::size());
        return Array<elemType>::ia[index];
}
