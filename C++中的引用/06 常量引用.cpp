#include<iostream>
using namespace std;

// 修饰形参，来防止误操作而修改了实参
void showValue(const int &b)
{
	// b = 1000;
	cout << "b = " << b << endl;
}

int main() {

	// 常量引用
	// 使用场景：用来修饰形参，来防止误操作
	int a = 10;
	
	int& ref = a; // 正确
	// int& ref2 = 10; // 错误,引用必须引一块合法的内存空间
	/*
	 *  正确
	 * 加上const后，编译器将代码修改为
	 * int a = 10;
	 * const int& ref = a;
	 * 只不过这个a，我们再也拿不到了，只能用ref3这个引用了
	 */
	const int& ref3 = 10;
	// ref3 = 20; // 报错，常量引用不能修改


	int b = 100;
	showValue(b);
	cout << "函数执行后，b = " << b << endl;
	system("pause");

	return 0;
}