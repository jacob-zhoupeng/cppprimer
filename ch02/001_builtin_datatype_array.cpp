#include <iostream>
using namespace std;

int main(void) {
	int ia[10];

	for (int index = 0; index < 10; ++index) {
		ia[index] = index;
	}

	for (int ii = 0; ii < 10; ++ii) {
		cout << "ia[" << ii << "]: " << ia[ii] << endl;
	}
	cout << endl;

	return 0;
}
