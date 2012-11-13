#include<vector>

using namespace std;

int main(void)
{
    int ia[10];

    for (int ix = 0; ix < 10; ++ix) {
        ia[ix] = ix;
    }

    vector<int> ivec(ia, ia+10);
    vector<int>::iterator iter = ivec.begin();

    for ( ; iter !=  ivec.end(); ++iter) {
        *iter *= 2;
    }

    return 0;
}
