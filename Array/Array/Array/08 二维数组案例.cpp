#include<iostream>
#include<string>
using namespace std;

int main() {

	int score[3][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	string names[3] = { "����", "����", "����" };
	int sizeTotal = sizeof(score);
	int sizeRow = sizeof(score[0]);
	int sizeOne = sizeof(score[0][0]);
	// ��������
	int rowNum = sizeTotal / sizeRow;
	// ��������
	int colNum = sizeRow / sizeOne;

	for (int i = 0; i < rowNum; i++) {
		int scores = 0;
		for (int j = 0; j < colNum; j++) {
			scores += score[i][j];
		}
		cout << names[i] << "ͬѧ���ܷ�Ϊ��" << scores << endl;
	}

	system("pause");

	return 0;
}