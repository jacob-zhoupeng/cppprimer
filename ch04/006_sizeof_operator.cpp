#include <string>
#include <iostream>
#include <cstddef>

using namespace std;

int main(void) {
	size_t ia;

	ia = sizeof(ia); // OK
	ia = sizeof ia; // OK

	// ia = sizeof int; // Error
	ia = sizeof(int); // OK
	int* pi = new int[12];
	cout << "pi: " << sizeof(pi)
		<< " *pi: " << sizeof(*pi)
		<< endl;

	// string
	string st1("foobar");
	string st2("a mighty oak");
	string *ps = &st1;

	cout << "st1: " << sizeof(st1)
		<< " st2: " << sizeof(st2)
		<< " ps: " << sizeof(ps)
		<< " *ps: " << sizeof(*ps)
		<< endl;
	cout << "short: \t" << sizeof(short) << endl;
	cout << "short*: \t" << sizeof(short*) << endl; // ����ָ��������ռ�ڴ��ֽ���
	cout << "short&: \t" << sizeof(short&) << endl; // ����������ָ������ڴ��ֽ���
	cout << "short[3]: \t" << sizeof(short[3]) << endl;

	cout << "char: \t" << sizeof(char) << endl; // [C++��֤����ʵ�ֶ�Ϊ1]

	// Compile time constant
	size_t char_size = sizeof(char);
	int array[sizeof(int)];

	return 0;
}
