#include <iostream>
#include "IStack.h"

using namespace std;

inline int IStack::size() {
	return _top;
}

inline bool IStack::empty() {
	return _top ? false : true;
}

inline bool IStack::full() {
	return _top < _stack.size() - 1 ? false : true;
}

bool IStack::pop(int& top_value) {
	if (empty()) {
		return false;
	}

	top_value = _stack[--_top];
	cout << "IStack::pop(): " << top_value << endl;

	return true;
}

bool IStack::push(int value) {
	cout << "IStack::push(" << value << ")\n";
	if (full()) {
		return false;
	}

	_stack[_top++] = value;
	return true;
}

void IStack::display() {
	if (!size()) {
		cout << "[size: 0] [bottom: :top]" << endl;
		return;
	}

	cout << "[size: " << size() << "] [bottom: ";
	for (int ii = 0; ii < _top; ++ii) {
		cout << _stack[ii] << " ";
	}
	cout << ":top]" << endl;
}
