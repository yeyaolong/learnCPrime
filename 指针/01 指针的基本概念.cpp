#include<iostream>
using namespace std;


int main1() {
	// 通过指针来保存地址
	int a = 10;
	// 定义指针
	// 1、指针类型与变量类型相同
	// 2、语法：数据类型　* 指针变量名 = &变量名;
	// & 是取址符号
	int * p = &a;
	cout << "a 的地址为：" << &a << endl;
	cout << "指针 p = " << p << endl;

	// 使用指针（解引用）
	// 使用解引用的方式来找到指针指向的内存
	// 语法： * 代表解引用，找到指针指向**内存中的数据**
	
	*p = 1000;
	cout << "a = " << a << endl;	// 1000
	cout << "指针 *p = " << *p << endl;	// 1000

	system("pause");

	return 0;
}