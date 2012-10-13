#include <iostream>

// Use variable to simplify our program
//! variable can be: Modify, Read & Write.

int main(void) {
	// Integer object
	int value = 2;
	int pow = 10;

	std::cout << value << " raised to the power of "
		<< pow << ": ";
	
	int res = 1; // Store calc result

	// For loop
	for (int count = 1; count <= pow; ++count) {
		res = res * value;
	}

	std::cout << res << std::endl;

	return 0;
}
