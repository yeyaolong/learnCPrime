#include<iostream>
using namespace std;

int main1() {

	// 引用的基本语法
	/*
		数据类型 &别名 = 原名
	
	*/

	int a = 10;
	// 创建引用
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a的地址 = " << &a << endl;
	cout << "b的地址 = " << &b << endl; // 地址相同
	b = 11;
	cout << "a = " << a << endl; // 11
	
	// 我自己感觉和指针用法差不多(下一节讲的就是引用和指针的关系)
	// 引用相当于指针常量 int* const p = 10;
	// 注意指针常量和常量指针的区分
	// 指针常量：int* const p = &a; // 初始化时必须赋值;始终指向一个地址（值可以改变，但地址不会改变）
	// 常量指针： int const * p = &a; // 始终指向一个常量值（值不可以改变，但是地址可以改变）

	int* c = &a;
	*c = 99;

	cout << "a = " << a << endl; // 99

	system("pause");

	return 0;
}