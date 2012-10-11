#include <iostream>

#include "Array.h"

using namespace std;

int main(void) {
    const int array_size = 4;

    // elemType: int
    Array<int> ia(array_size);

    // elemType: double
    Array<double> da(array_size);

    // elemType: char
    Array<char> ca(array_size);

    for (int ix = 0; ix < array_size; ix++) {
        ia[ix] = ix;
        da[ix] = ix * 1.75;
        ca[ix] = 'a' + ix;
    }

    for (int ii = 0; ii < array_size; ii++) {
        cout << "[" << ii << "] ia: " << ia[ii]
            << "\tca: " << ca[ii]
            << "\tda: " << da[ii] << endl;
    }

    return 0;
}
