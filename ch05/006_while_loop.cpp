#include<iostream>

using namespace std;

int sumit(int* parray_begin, int* parray_end)
{
    int sum = 0;

    if (!parray_begin || !parray_end) {
        return sum;
    }

    while (parray_begin !=  parray_end) {
        // 把当前元素值加到sum上, 然后增
        // 加指针, 使其指向下一个元素
        sum += *parray_begin++;
    }

    return sum;
}

int main(void)
{
    int ia[6] = { 0, 1, 2, 3, 4, 5 };

    cout << "ia [";
    for (int ix = 0; ix < 6; ++ix) {
        cout << ia[ix] << " ";
    }
    cout << "]" << endl;

    int sum = sumit(&ia[0], &ia[6]);
    cout << "sum: " << sum << endl;

    return 0;
}
