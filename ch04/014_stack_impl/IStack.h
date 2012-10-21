#include <vector>

class IStack {
public:
	IStack(int capacity) : _stack(capacity), _top(0) {}

	bool pop(int& value);
	bool push(int value);

	bool full();
	bool empty();
	void display();

	int size();
private:
	int _top;
	std::vector<int> _stack;
};
