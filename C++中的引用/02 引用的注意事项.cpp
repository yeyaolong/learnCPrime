#include<iostream>
using namespace std;

int main2() {
	int a = 10;
	

	// 1、引用必须初始化
	int& b = a;
	//int& c; // 编译器报错
	// 2、引用在初始化后不可以发生改变
	int c = 20;
	b = c; // 这是赋值，不是改变引用
	//&b = c; // 编译器报错

	cout << "a = " << a << endl; // 20
	cout << "b = " << b << endl; // 20
	cout << "c = " << c << endl; // 20

	system("pause");

	return 0;
}