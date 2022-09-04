#include<iostream>
using namespace std;

// 函数重载注意事项
// 1、引用作为重载的条件

void func3(int& a)
{
	cout << "func3调用 a = " << a << endl;
}
// 判断为函数类型不同，可以重载
void func3(const int& a)
{
	cout << "func3 const 调用 a = " << a << endl;
}

// 2、函数重载碰到默认参数

void func4(int a, int b = 10)
{
	cout << "func4(int a = 10)调用, a = " << a << "\tb = " << b << endl;
}

void func4(int a)
{
	cout << "func4(int a = 10)调用, a = " << a << endl;
}


int main() {
	int a = 10;
	func3(a);
	const int b = 10;
	func3(b);
	func3(10); // 调用也是func3(const int a).因为 int &a = 10;不合法。而const int& a = 10; 合法


	// func4(20); // 尽管函数重载的写法是正确的，但是这里会报错，因为无法区分func4(int a, int b = 10);和func4(int a);
	func4(10, 20); // 这里不会报错，编译器可以区分调用哪个重载函数

	system("pause");

	return 0;
}