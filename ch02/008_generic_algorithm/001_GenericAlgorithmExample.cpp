#include <vector>
#include <algorithm>
#include <iostream>

int ia[10] = { 51, 23, 7, 88, 41, 98, 12, 103, 37, 6 };

int main(void) {
	std::vector<int> vec(ia, ia+10);

	// Sort
	std::sort(vec.begin(), vec.end());

	int search_value;
	std::cin >> search_value;

	// Search
	std::vector<int>::iterator found;
	found = std::find(vec.begin(), vec.end(), search_value);
	if (found != vec.end()) {
		std::cout << "search_value found!\n";
	} else {
		std::cout << "search_value not found!\n";
	}

	return 0;
}
