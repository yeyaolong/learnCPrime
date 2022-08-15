#include<iostream>
using namespace std;

int main2() {

	// 数组名的用途
	/*
		1、可以统计整个数组在内存中的长度
		2、可以获取数组在内存中的首地址
	*/

	int arr[5] = { 1, 2, 3, 4, 5 };

	// 1、可以统计整个数组在内存中的长度
	cout << "arr数组的第一个元素在内存中的长度：" << sizeof(arr[0]) << endl; // 4，因为一个int数值占4个字节
	cout << "arr数组在内存中的长度：" << sizeof(arr) << endl; // 20，因为一个int数值占4个字节
	cout << "arr数组元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;

	// 2、可以获取数组在内存中的首地址
	cout << "数组首地址：" << arr << endl; // 一个十六进制数
	cout << "数组第一个元素地址" << &arr[0] << endl; // 与数组首地址相等,需要用 & 符号才能取到地址， & 标识取址符号
	cout << "数组第二个元素地址" << &arr[1] << endl; // 需要用 & 符号才能取到地址

	// arr = 100; // 编译异常，数组名是一个常量，存储了数组的地址,不可更改

	system("pause");

	return 0;
}