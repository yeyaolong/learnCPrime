#include<iostream>
using namespace std;

int main5() {

	int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	int tmp;
	int arrLength = sizeof(arr) / sizeof(arr[0]);
	int end = arrLength - 1;

	cout << "排序前：" << endl;
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < end; i++) {
		
		// 内层循环对比次数 = 元素个数 - 1 - 当前轮数
		for (int j = 0; j < end - i; j++) {
			tmp = arr[j];
			if (tmp < arr[j + 1]) {
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

		cout << "第" << i << "轮排序结果" << endl;
		for (int j = 0; j < arrLength; j++) {
			cout << arr[j] << "\t";
		}
		cout << endl;
		
	}

	cout << "排序后的结果：" << endl;
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << "\t";
	}
	


	system("pause");

	return 0;
}