#include <vector>
#include <cassert>

using namespace std;

int min(const vector<int>& ivec, int& occurs) {
    int size = ivec.size();

    // ¥¶¿Ìø’vector“Ï≥£
    if (!size) {
        occurs = 0;
        return 0;
    }

    int minVal = ivec[0];
    occurs = 1;

    for (int ix = 1; ix < size; ++ix) {
        if (minVal == ivec[ix]) {
            ++occurs;
        } else if (minVal > ivec[ix]) {
            minVal = ivec[ix];
            occurs = 1;
        }
    }

    return minVal;
}

int main(void) {
    int iarray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    vector<int> ivec(iarray, iarray + sizeof(iarray)/sizeof(*iarray));

    int occurs = 0;
    int minVal = 0;
    
    minVal = min(ivec, occurs);

    assert(minVal == 1);
    assert(occurs == 2);


    vector<int> i_emtpy_vec;
    
    minVal = min(i_emtpy_vec, occurs);

    assert(minVal == 0);
    assert(occurs == 0);

    return 0;
}
