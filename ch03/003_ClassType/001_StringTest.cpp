#include <iostream>

#include "001_String.h"

using namespace std;

 int main(void) {
	 int aCnt = 0;
	 int eCnt = 0;
	 int iCnt = 0;
	 int oCnt = 0;
	 int uCnt = 0;
	 
	 int theCnt = 0;
	 int itCnt = 0;
	 int wdCnt = 0;
	 int notVowel = 0;

	 String buf;
	 String the("the");
	 String it("it");

	 while (cin >> buf) {
		++wdCnt;

		cout << buf << ' ';
		if (0 == wdCnt % 12) {
			cout << endl;
		}

		if (the == buf || buf == "The") {
			++theCnt;
		} else if (it == buf || buf == "The") {
			++itCnt;
		}

		for (int ii = 0; ii < buf.size(); ++ii) {
			switch(buf[ii]) {
				case 'a':
				case 'A':
					++aCnt;
					break;
				case 'e':
				case 'E':
					++eCnt;
					break;
				case 'i':
				case 'I':
                    ++iCnt;
					break;
				case 'o':
				case 'O':
					++oCnt;
					break;
				case 'u':
				case 'U':
					++uCnt;
					break;
				default:
					++notVowel;
					break;
			}
		}
	 }

	 cout << "\n\n"
		 << "Words read: " << wdCnt << "\n\n"
		 << "the/The: " << theCnt << '\n'
		 << "it/It: " << itCnt << "\n\n"
		 << "non-vowels read: " << notVowel << "\n\n"
		 << "a: " << aCnt << '\n'
		 << "e: " << eCnt << '\n'
		 << "i: " << iCnt << '\n'
		 << "o: " << oCnt << '\n'
		 << "u: " << uCnt << endl;

	 return 0;
 }
