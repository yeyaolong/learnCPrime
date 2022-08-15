#include<iostream>
using namespace std;

int main13() {
	// 1、出现在switch语句中
	cout << "请选择副本难度" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;
	int select;
	cin >> select;
	switch (select) {
	case 1:
		cout << "您选择了普通难度" << endl;
		break;
	case 2:
		cout << "您选择了中等难度" << endl;
		break;
	case 3:
		cout << "您选择了困难难度" << endl;
		break;
	default:
		cout << "您选择了中等难度" << endl;
		break;
	}

	// 2、出现在循环语句中
	for (int i = 0; i < 10; i++) {
		if (i > 5) {
			break;
		}
		cout << i << endl;
	}
	// 3、出现在嵌套循环中,仅退出内部循环
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*\t";
		}
		cout << endl;
	}

	return 0;

}