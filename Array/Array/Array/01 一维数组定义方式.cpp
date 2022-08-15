#include<iostream>
using namespace std;

int main1() {

	// 数组
	/*
		1、数据类型 数组名[数组长度]
		2、数据类型 数组名[数组长度] = { 值1, 值2, 值3, ...}
		3、数据类型 数组名[数组长度] = { 值1, 值2, 值3, ...}
	*/

	// 方式1
	int arr1[4];
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	// 获取数组长度
	int sizeTotal = sizeof(arr1);
	int sizeOne = sizeof(arr1[0]);
	int len1 = sizeTotal / sizeOne;

	for (int i = 0; i < len1; i++) {
		cout << "arr1下标" << i << ": " << arr1[i] << endl;
	}


	// 方式2
	int arr2[4] = { 5, 6, 7, 8 };
	int sizeTotal2 = sizeof(arr2);
	int sizeOne2 = sizeof(arr2[0]);
	int len2 = sizeTotal2 / sizeOne2;

	for (int i = 0; i < len2; i++) {
		cout << "arr2下标" << i << ": " << arr2[i] << endl;
	}
	// 方式3
	int arr3[] = { 9, 10, 11, 12 };
	int sizeTotal3 = sizeof(arr3);
	int sizeOne3 = sizeof(arr3[0]);
	int len3 = sizeTotal3 / sizeOne3;


	for (int i = 0; i < len3; i++) {
		cout << "arr3下标" << i << ": " << arr3[i] << endl;
	}
	// 循环比实际数组长度长, 
	// 内存溢出，这个内存没有被赋值，默认就是0xCC，所以输出-858993460
	for (int i = 0; i < (len3 + 1); i++) {
		cout << "arr3下标" << i << ": " << arr3[i] << endl;
	}
	
	// 不全赋值
	// 因为int不赋值时的默认值是0，所以int数组中，没有赋值的下标元素也等于0
	int arr4[5] = { 1, 2 };
	int sizeTotal4 = sizeof(arr4);
	int sizeOne4 = sizeof(arr4[0]);
	int len4 = sizeTotal4 / sizeOne4;


	for (int i = 0; i < len4; i++) {
		cout << "arr4下标" << i << ": " << arr4[i] << endl;
	}

	system("pause");

	return 0;
}