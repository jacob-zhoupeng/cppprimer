#include <iostream>

using namespace std;

int main(void) {
	cout << "Macros predefined by compiler:\n";

	cout << "__FILE__: " << __FILE__ << "\n";
	cout << "__FILE__: " << __LINE__ << "\n";
	cout << "__cplusplus: " << __cplusplus << "\n";
	cout << "__STDC__: " << __STDC__ << "\n";
	cout << "__TIME__: " << __TIME__ << "\n";
	cout << "__DATE__: " << __DATE__ << "\n";

	return 0;
}

//! __STDC__ macro only available for C source file
//! __cplusplus macro only available for C++ source file
