// ���ű��ʽ�������Ҽ��㣬 ���ű��ʽ�Ľ�������ұ߱��ʽ��ֵ

int get_value();

int main(void) {
	int index = 0;
	int* ia = new int[3];
	int ix = 0;
	int sz = 3;

	int ival = (0 != ia) 
		? (ix = get_value(), ia[index] = ix)
		: (ia = new int[sz], ia[index] = 0);

	delete[] ia;
	ia = 0;

	return 0;
}

int get_value() {
	return 1;
}
