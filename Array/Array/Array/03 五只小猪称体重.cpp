#include<iostream>
using namespace std;

int main3() {

	int arr[5] = { 300, 350, 500, 400, 250 };

	// �����鳤��
	int sizeTotal = sizeof(arr);
	int sizeOne = sizeof(arr[0]);
	int length = sizeTotal / sizeOne;
	// �����ֵ
	int max = arr[0];
	int maxNum = 1; // ���ص���ֻС��
	for (int i = 0; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxNum = i + 1;
		}
	}
	cout << "���ص�С��Ϊ" << maxNum << "��С��" << endl;
	cout << "���ص�С������Ϊ" << max << "kg" << endl;

	system("pause");

	return 0;
}