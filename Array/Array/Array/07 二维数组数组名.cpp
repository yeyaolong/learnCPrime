#include<iostream>
using namespace std;

int main7() {

	// 二维数组用途
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	// 1、查看占用内存空间大小
	cout << "占用内存空间大小为：" << sizeof(arr) << endl;
	cout << "数组第一行占用内存空间大小为：" << sizeof(arr[0]) << endl;
	cout << "数组元素的一个占用内存空间大小为" << sizeof(arr[0][0]) << endl;
	// 求行数
	cout << "数组行数 = " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "数组列数 = " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	// 2、查看首地址
	cout << "二维数组所在内存首地址:" << arr << endl;
	cout << "二维数组第一行内存首地址:" << arr[0] << endl;
	cout << "二维数组第二行内存首地址:" << arr[1] << endl;
	cout << "二维数组第一个元素地址:" << &arr[0][0] << endl;
	cout << "二维数组第二行第一个元素地址:" << &arr[1][0] << endl;
	system("pause");

	return 0;
}