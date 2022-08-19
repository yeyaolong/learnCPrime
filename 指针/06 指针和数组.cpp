#include<iostream>
using namespace std;

int main6() {

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 普通的访问
	cout << "数组中第一个元素 = " << arr[0] << endl;

	
	// 使用指针访问
	// arr代表数组的首地址,所以arr的数据类型是 int *
	// &arr代表的是整个数组的地址，所以&arr的数据类型是 int*[10]
	// 尽管二者在用cout输出时地址是相等的，可能是cout对数据做了什么处理
	cout << "arr = " << arr << endl;
	cout << "&arr = " << &arr << endl;
	// cout << "arr == &arr" << (arr == &arr) << endl;

	int* p = arr; // arr代表数组的首地址 &arr代表的是整个数组所在的地址
	// int* p2 = &arr; // 无法从“int (*)[10]”转换为“int *”
	// int p2 = &arr; // 无法从“int (*)[10]”转换为“int”
	cout << "利用指针访问数组中第一个元素 = "  << *p << endl;

	for (int i = 0; i < 10; i++) {
		cout << "利用指针访问数组中第" << (i+1) << "个元素：\t" << *p << endl;
		p++; // 因为p变量本身int的，也就是是4字节的，所以，这里p++就会后移4个字节
	}

	system("pause");

	return 0;
}