#include<iostream>

using namespace std;

int sumit(int* parray_begin, int* parray_end)
{
    int sum = 0;

    if (!parray_begin || !parray_end) {
        return sum;
    }

    while (parray_begin !=  parray_end) {
        // �ѵ�ǰԪ��ֵ�ӵ�sum��, Ȼ����
        // ��ָ��, ʹ��ָ����һ��Ԫ��
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
