#include<iostream>
using namespace std;

int main3() {

	int arr[5] = { 300, 350, 500, 400, 250 };

	// 求数组长度
	int sizeTotal = sizeof(arr);
	int sizeOne = sizeof(arr[0]);
	int length = sizeTotal / sizeOne;
	// 求最大值
	int max = arr[0];
	int maxNum = 1; // 最重的那只小猪
	for (int i = 0; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxNum = i + 1;
		}
	}
	cout << "最重的小猪为" << maxNum << "号小猪" << endl;
	cout << "最重的小猪体重为" << max << "kg" << endl;

	system("pause");

	return 0;
}