#include<iostream>
#include<string>
using namespace std;

int main() {

	int score[3][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	string names[3] = { "张三", "李四", "王五" };
	int sizeTotal = sizeof(score);
	int sizeRow = sizeof(score[0]);
	int sizeOne = sizeof(score[0][0]);
	// 数组行数
	int rowNum = sizeTotal / sizeRow;
	// 数组列数
	int colNum = sizeRow / sizeOne;

	for (int i = 0; i < rowNum; i++) {
		int scores = 0;
		for (int j = 0; j < colNum; j++) {
			scores += score[i][j];
		}
		cout << names[i] << "同学的总分为：" << scores << endl;
	}

	system("pause");

	return 0;
}