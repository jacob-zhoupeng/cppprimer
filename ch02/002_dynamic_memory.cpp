//! What's wrong with this program?
// Answer: uninitialized dynamic memrory.
#include <cstdio>
using namespace std;

int main(void) {
	int* pi = new int(10);
	int* pia = new int[10];

	while (*pi < 10) {
		printf("in while loop...\n");
		pia[*pi] = *pi;
		*pi = *pi + 1;
	}
	delete pi;
	delete[] pia;

	return 0;
}
