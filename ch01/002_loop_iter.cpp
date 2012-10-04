#include <iostream>

using namespace std;

int main(void) {
	int iterations = 0;
	bool continue_loop = true;

	while (false != continue_loop) {
		iterations++;
		cout << "The while loop has executed "
			<< iterations << " times\n";
		if (5 == iterations) {
			continue_loop = false;
		}
	}

	return 0;
}
