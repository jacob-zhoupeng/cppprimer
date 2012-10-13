// ***** C-style character string implementation *****
#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	int errors = 0;
	const char* pc = "a very long literal string";

	for (int ii = 0; ii < 1000000; ++ii) {
		int len = strlen(pc);
		char* pc2 = new char[len + 1];
		strcpy(pc2, pc);
		if (strcmp(pc2, pc)) {
			++errors;
		}
		delete [] pc2;
	}

	cout << "C-style character string: "
		<< errors << " errors occurred.\n";

	return 0;
}
