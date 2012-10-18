#include <cassert>
#include <cstring>
#include <cstdlib>

#include <iostream>
#include <iomanip>

#include "001_String.h"

String::String() {
	_size = 0;
	_string = 0;
}

String::String(const String& str) {
	_size = str.size();
    
	if (!str.c_str()) {
		_string = 0;
	} else {
		_string = new char[_size + 1];
		std::strcpy(_string, str.c_str());
	}
}

String::String(const char* c_str) {
	if (!c_str) {
		_size = 0;
		_string = 0;
	} else {
		_size = std::strlen(c_str);
		_string = new char[_size + 1];
		std::strcpy(_string, c_str);
	}
}

String::~String() {
	if (0 != _size) {
		delete[] _string;
		_string = 0;
		_size = 0;
	}
}

inline bool String::operator==(const String& rhs) {
	if (_size != rhs.size()) {
		return false;
	}
	
	return std::strcmp(_string, rhs.c_str()) == 0;
}

inline bool String::operator==(const char* c_str) {
	if (_size != std::strlen(c_str)) {
		return false;
	}
	return std::strcmp(_string, c_str) == 0;
}

inline String& String::operator=(const char* c_str) {
	if (!c_str) {
		_size = 0;
		delete[] _string;
		_string = 0;
	} else {
		_size = std::strlen(c_str);
		delete[] _string;
		_string = new char[_size + 1];
		std::strcpy(_string, c_str);
	}

	return *this;
}

inline String& String::operator=(const String& rhs) {
	if (this != &rhs) {
		delete[] _string;
		_size = rhs._size;
		if (!rhs._string) {
			_string = 0;
		} else {
			_string = new char[_size + 1];
			std::strcpy(_string, rhs._string);
		}
	}
	return *this;
}

inline char& String::operator[](int index) {
	assert(index >= 0 && index < _size);
	return _string[index];
}

inline istream& operator>>(istream& is, String& s) {
	const int limit_string_size = 4096;
	char inBuf[limit_string_size];

	is >> setw(limit_string_size) >> inBuf;
	s = inBuf;

	return is;
}

inline ostream& operator<<(ostream& os, const String& s) {
	return os << s.c_str();
}
