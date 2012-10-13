// ***** string implementation *****
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int errors = 0;
	string str("a very long literal string");

	for (int kk = 0; kk < 1000000; ++kk) {
		int len = str.size();
		string str2 = str;
		if (str != str2) {
			++errors;
		}
	}

	cout << "string class: " << errors << " errors occurred.\n";

	return 0;
}
