#include <bitset>
#include <string>
#include <iostream>

using namespace std;

int main(void) {
	bitset<32> bitvec; // 下标0-31，默认每位初始化为0
	
	bool is_set = bitvec.any();
	bool is_not_set = bitvec.none();
	
	int bits_set = bitvec.count();

	for (int index = 0; index < 32; ++index) {
		if (0 == index % 2) {
			bitvec[index] = 1;
		}
	}

	if (bitvec.test(0)) {
		// 测试0位置是否为1
	}

	cout << "bitvec: positions turned on:\n\t";
	for (int index = 0; index < 32; ++index) {
		if (bitvec[index]) { // 另一种测试某位是否为1的方法
			cout << index << " ";
		}
	}
	cout << endl;

	// 设置某位为0
	bitvec.reset(0);
	bitvec[0] = 0;

	// 重置所有位为0
	bitvec.reset();

	if (true != bitvec.none()) {
		bitvec.set(); // 设置所有位为1
	}

	if (true != bitvec.any()) {
		// 所有位都为0
	}

	bitvec.flip(0); // 翻转第一位
	bitvec[0].flip(); // 翻转第一位
	bitvec.flip(); // 翻转所有位的值

	// ---------------- 构造函数 --------------------------

	// 0000 0000 0000 0000 1111 1111 1111 1111 
	bitset<32> bitvec2(0xffff);

	// 0000 0000 0000 0000 0000 0000 0000 1010
	bitset<32> bitvec3(012);

	// 用字符串形式构造 bitset 对象
	string bitval("1010");
	bitset<32> bitvec4(bitval);

	// 从位置6开始(*从右往左计数*)，长度为4: 1010
	string bitval2("1111110101100011010101");
	bitset<32> bitvec5(bitval2, 6, 4);

	// 从位置6开始(*从右往左计数*)，直到字符串结束: 1010101
	string bitval3("1111110101100011010101");
	bitset<32> bitvec6(bitval3, 6);

	// 将 bitset 对象转换成其他类型
	string bitval4(bitvec3.to_string());
	unsigned long int bitset_ulong_value = bitvec3.to_ulong();

	// 支持位操作符
	bitset<32> bitvec7 = bitvec2 & bitvec3;
	bitset<32> bitvec8 = bitvec2 | bitvec3;

	return 0;
}
