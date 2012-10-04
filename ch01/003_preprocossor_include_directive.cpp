#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(void) {
	#ifdef DEBUG
	cout << "Beginning execution of main()\n";
	#endif

	string word;
	vector<string> text;

	while (cin >> word) {
		#ifdef DEBUG
		cout << "word read: " << word << "\n";
		#endif
		text.push_back(word);
	}

	for (vector<string>::iterator it = text.begin(); it != text.end(); it++) {
		cout << "word in text: " << *it << "\n";
	}
}

// $CC -DDEBUG 003_preprocessor_include_directive.cpp 
// $CC 003_preprocessor_include_directive.cpp
