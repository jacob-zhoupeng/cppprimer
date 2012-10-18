#ifndef STRING_H_INCLUDE
#define STRING_H_INCLUDE

#include <iostream>

using namespace std;

class String {
public:
	// Constructors
	String();
	String(const char* c_str);
	String(const String& rhs);
	
	// Destructor
	~String();

	// Overload operators
	String& operator=(const String& rhs);
	String& operator=(const char* c_str);

	bool operator==(const String& rhs);
	bool operator==(const char* c_str);

	char& operator[](int index);

	// Member function
	int size() const {
		return _size;
	}

	const char* c_str() const {
		return _string;
	}
private:
	int _size;
	char* _string;
};

extern istream& operator>>(istream& is, String& s);
extern ostream& operator<<(ostream& os, const String& s);

#endif // STRING_H_INCLUDE
