#include<iostream>
#include<math.h>
using namespace std;

int main8() {

	// 一个三位数
	// 每一位的三次方相加的和，等于它自身

	int current = 100;
	int max = 1000;
	cout << "水仙花数包括：" << endl;
	while (current < 1000) {
		// 拿到个位
		int single = current % 10;
		// 拿到十位
		int ten = current / 10 % 10;
		// 拿到百位数
		int hundred = current / 100;

		int result = pow(single, 3) + pow(ten, 3) + pow(hundred, 3);
		if (result == current) {
			cout << current << endl;
		}
		current++;
	}

	system("pause");
	return 0;
}