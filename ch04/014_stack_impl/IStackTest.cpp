#include <iostream>
#include "IStack.h"

using namespace std;

int main(void) {
	IStack stack(32);

	stack.display();

	for (int ii = 1; ii < 51; ++ii) {
		if (0 == ii % 2) {
			stack.push(ii);
		}

		if (0 == ii % 5) {
			stack.display();
		}

		if (0 == ii % 10) {
			int dummy;
			stack.pop(dummy);
			stack.pop(dummy);
			stack.display();
		}
	}

	return 0;
}
