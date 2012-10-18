#include <iostream>

using namespace std;

int main(void) {
	char byte_value = 32;
	int ival = 8;

	// Overflow of byte_value's available memory
	byte_value = ival * byte_value;
	cout << "byte_value: " << static_cast<int>(byte_value) << endl;

	return 0;
}
