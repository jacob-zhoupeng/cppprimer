#include<iostream>

using namespace std;

int main(void) {
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int none_vowel_cnt = 0;
    int vowelCnt = 0;

    while (cin >> ch) {
        switch (ch) {
            case 'a':
            case 'A':
                aCnt++;
                break;    //! Be careful.
            case 'e':
            case 'E':
                eCnt++;
                break;
            case 'i':
            case 'I':
                iCnt++;
                break;
            case 'o':
            case 'O':
                oCnt++;
                break;
            case 'u':
            case 'U':
                uCnt++;
                break;
            default:
                none_vowel_cnt++;
                break;
        }

        switch (ch) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowelCnt++;
                break;
            default:
                break;
        }
    }

    cout << "Number of vowel a/A: \t" << aCnt << '\n'
         << "Number of vowel e/E: \t" << eCnt << '\n'
         << "Number of vowel i/I: \t" << iCnt << '\n'
         << "Number of vowel o/O: \t" << oCnt << '\n'
         << "Number of vowel u/U: \t" << uCnt << '\n'
         << "Number of total vowel: \t" << vowelCnt << '\n'
         << "Number of NONE vowel: \t" << none_vowel_cnt << '\n';
    
    return 0;
}
