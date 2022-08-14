#include<iostream>

using namespace std;

int main1() {

	// 选择结构 单行if语句
	// 用户输入分数，如果分数大于600，视为考上一本大学
	const int score1 = 600;
	const int score2 = 500;
	const int score3 = 400;
	int userScore = 0;
	cout << "请输入分数" << endl;
	cin >> userScore;
	cout << "您输入的分数为：" << userScore << endl;

	if (userScore > score1) {
		// 满足条件时执行
		cout << "您考上了一本大学" << endl;
		if (userScore > 700) {
			cout << "您考上了北大" << endl;
		}
		else if (userScore > 650) {
			cout << "您考上了清华" << endl;
		}
		else {
			cout << "您考上了浙大" << endl;
		}
	}
	else if (userScore > score2) {
		cout << "您考上了二本大学" << endl;
	}
	else if (userScore > score3) {
		cout << "您考上了三本大学" << endl;
	}
	else {
		// 不满足条件时执行
		const int gap = score3 - userScore + 1;
		cout << "好可惜，差" << gap << "分考上大学" << endl;
	}
	system("pause");

	return 0;
}