#include <iostream>

extern int pow(int base_number, int power_number);

int main(void) {
	int val = 2;
	int exp = 15;

	std::cout << "The Powers of 2\n";
	for (int count = 0; count <= exp; ++count) {
		std::cout << count << ": " << pow(val, count) << std::endl;
	}

	return 0;
}

int pow(int base_number, int power_number) {
	int res = 1;
	for ( ; power_number > 0; --power_number) {
		res = res * base_number;
	}

	return res;
}
