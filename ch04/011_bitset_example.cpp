#include <bitset>
#include <string>
#include <iostream>

using namespace std;

int main(void) {
	bitset<32> bitvec; // �±�0-31��Ĭ��ÿλ��ʼ��Ϊ0
	
	bool is_set = bitvec.any();
	bool is_not_set = bitvec.none();
	
	int bits_set = bitvec.count();

	for (int index = 0; index < 32; ++index) {
		if (0 == index % 2) {
			bitvec[index] = 1;
		}
	}

	if (bitvec.test(0)) {
		// ����0λ���Ƿ�Ϊ1
	}

	cout << "bitvec: positions turned on:\n\t";
	for (int index = 0; index < 32; ++index) {
		if (bitvec[index]) { // ��һ�ֲ���ĳλ�Ƿ�Ϊ1�ķ���
			cout << index << " ";
		}
	}
	cout << endl;

	// ����ĳλΪ0
	bitvec.reset(0);
	bitvec[0] = 0;

	// ��������λΪ0
	bitvec.reset();

	if (true != bitvec.none()) {
		bitvec.set(); // ��������λΪ1
	}

	if (true != bitvec.any()) {
		// ����λ��Ϊ0
	}

	bitvec.flip(0); // ��ת��һλ
	bitvec[0].flip(); // ��ת��һλ
	bitvec.flip(); // ��ת����λ��ֵ

	// ---------------- ���캯�� --------------------------

	// 0000 0000 0000 0000 1111 1111 1111 1111 
	bitset<32> bitvec2(0xffff);

	// 0000 0000 0000 0000 0000 0000 0000 1010
	bitset<32> bitvec3(012);

	// ���ַ�����ʽ���� bitset ����
	string bitval("1010");
	bitset<32> bitvec4(bitval);

	// ��λ��6��ʼ(*�����������*)������Ϊ4: 1010
	string bitval2("1111110101100011010101");
	bitset<32> bitvec5(bitval2, 6, 4);

	// ��λ��6��ʼ(*�����������*)��ֱ���ַ�������: 1010101
	string bitval3("1111110101100011010101");
	bitset<32> bitvec6(bitval3, 6);

	// �� bitset ����ת������������
	string bitval4(bitvec3.to_string());
	unsigned long int bitset_ulong_value = bitvec3.to_ulong();

	// ֧��λ������
	bitset<32> bitvec7 = bitvec2 & bitvec3;
	bitset<32> bitvec8 = bitvec2 | bitvec3;

	return 0;
}
