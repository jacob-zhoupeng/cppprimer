#include <iostream>

inline bool bit_on(unsigned int ui, int pos) {
	return ui & (1 << pos);
}

enum students {
	Danny = 1, Jeffery, Ethan, Zev, Ebie,
	ZhouPeng, ZhangKaiYu, ChenHao, ZhangDongDong, ChenDi,
	DaiXianBo, ZhangGuiHao, LiuHu, QuPing, LiuNianFeng,
	XiaoXiao, XuXiaoLong, HuangKai, YaoYingZhi, SunXueTao,
	DingXu, DingXiaoXu, ZhongPing, GanQiXian, HeXinXin,
	WangJinZhi, LiHongJian,
}; // 27��ѧ��

int main(void) {
	int quiz1 = 0xFFFFFFFF;
	const int student_size = 27;

	// Deliberately(�����) starts at 1
	bool has_passed_quiz[student_size + 1];

	for (int index = 1; index <= student_size; ++index) {
		has_passed_quiz[index] = bit_on(quiz1, index);
	}

	return 0;
}
