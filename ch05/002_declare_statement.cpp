#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    string fileName;

    cout << "Please enter name of file to open: ";
    cin >> fileName;

    if (fileName.empty()) {
        cerr << "fileName is empty(). bailing out. bye!\n";
        return -1;
    }

    ifstream inFile(fileName.c_str());

    if (!inFile) {
        cerr << "unable to open file. bailing out. bye!\n";
        return -2;
    }

    string inBuf;

    vector<string> text;

    while (inFile >> inBuf) {
        for (int ix = 0; ix < inBuf.size(); ++ix) {
            char ch; //! 这里声明放入if中gcc-4.6.2编译不通过
            
            if ((ch = inBuf[ix]) == '.') {
                ch = '_';
                inBuf[ix] = ch;
            }
        }
        
        text.push_back(inBuf);
    }

    if (text.empty()) {
        return 0;
    }

    vector<string>::iterator iter = text.begin();
    vector<string>::iterator iend = text.end();

    while (iter != iend) {
        cout << *iter << '\n';
        ++iter;
    }

    return 0;
}
