#include<iostream>
#include<string>
using namespace std;

int main4() {

	cout << "请给电影打分(10分制):" << endl;

	int score = 0;

	cin >> score;
	string str = "烂片";
	if (score > 10) {
		score = 10;
	}
	switch (score) {
	case 10:
	case 9:
		str = "经典";
		break;
	case 8:
	case 7:
		str = "非常好";
		break;
	case 6:
	case 5:
		str = "一般";
		break;
	default:
		str = "烂片";
		break;
	}

	cout << "您对电影的评价是：" << str << endl;

	// switch缺点
	// 判断分支只能是整型或字符型，不能是区间
	// switch优点
	// 结构清晰，执行效率高


	system("pause");

	return 0;
}