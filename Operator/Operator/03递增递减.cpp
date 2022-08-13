#include<iostream>
using namespace std;

int main3() {

	// 前置递增
	int a = 10;
	++a;
	cout << "a = " << a << endl;
	// 后置递增
	
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	// 前置和后置的区别
	// 前置： 先让变量 + 1，再进行表达式计算
	// 后置：先进行表达式计算，再让变量+1
	int c = 10;
	int d = 10;
	cout << "c = " << ++c * 10<< endl;	// 110
	cout << "d = " << d++ * 10<< endl;	// 100
	cout << "d = " << d << endl;	// 11

	// 前置递减

	
	
	// 后置递减



	system("pause");

	return 0;
}