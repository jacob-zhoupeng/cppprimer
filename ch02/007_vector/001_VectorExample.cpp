#include <vector>
#include <iostream>

using namespace std;

int main(void) {
	// ============= Vector initialization =============

	// Empty vector
	vector<int> veco;

	const int size = 8;
	const int value = 1024;

	// capacity: 8 init value: 0
	vector<int> vecl(size);
	
	// capacity: 8 init value: 1024
	vector<int> vec2(size, value);

	// initialize vector with an array
	int ia[4] = { 0, 1, 1, 2 };
	vector<int> vec3(ia, ia+4);

	// vec4 is a copy of vec2
	vector<int> vec4(vec2);

	return 0;
}
