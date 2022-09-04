#include<iostream>
using namespace std;

// 函数重载
// 可以让函数名相同，提高复用性
// 1、同一个作用域下
// 2、函数名相同
// 3、函数参数类型不同，或者个数不同，或者顺序不同

void func2() {
	cout << "func的调用" << endl;
}

void func2(int a) {
	cout << "func(int a)的调用!" << endl;
}

void func2(double a) {
	cout << "func(double a)" << endl;
}

void func2(int a, double b)
{
	cout << "func(int a, double b)" << endl;
}

void func2(double a, int b)
{
	cout << "func(double a, int b)" << endl;
}

// 注意事项
// 函数的返回值不可以作为函数重载条件
//int func2(double a, int b)
//{
//	cout << "int func(double a, int b)" << endl;
//}
int main3() {

	func2();

	func2(10);

	func2(3.14);

	func2(10, 3.14);
	func2(3.14, 10);

	system("pause");

	return 0;
}