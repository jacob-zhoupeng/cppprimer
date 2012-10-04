#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
	ofstream outfile("out_file");
	if (!outfile) { // ofstream ������operator!
		cerr << "error: unable to open output file!\n";
		return -1;
	}

	ifstream infile("in_file");
	if (!infile) { // infstream ������operator!
		cerr << "error: unable to open input file!\n";
		return -1;
	}

	string word;
	while (infile >> word) {
		outfile << word << " ^_^ ";
	}

	return 0;
}
