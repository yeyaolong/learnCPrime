#include<iostream>
using namespace std;

void bubleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j + 1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void bubleSort2(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {

		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";
	}
}

int main() {

	// 封装一个函数，利用冒泡排序，实现对整数数组的升序排序
	int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8, 7, 5 };

	int len = sizeof(arr) / sizeof(arr[0]);

	bubleSort(arr, len);

	printArray(arr, len);

	system("pause"); 

	return 0;
}