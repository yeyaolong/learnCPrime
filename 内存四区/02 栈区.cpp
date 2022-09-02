#include<iostream>
using namespace std;

// 栈区数据的注意事项 -- 不要返回局部变量的地址
// 栈区的数据由编译器管理开辟和释放

int* func() // 形参也会存放在栈区
{
	int a = 10; // 局部变量 存放在栈区，栈区的数据在函数执行完后自动释放

	return &a;
}

void func2(int c) {
	int d = 10;
	cout << "c的地址：" << &c << endl;
	cout << "d的地址：" << &d << endl; // 形参与局部变量地址很近，都是放在栈区的内存中
}

int main() {
	
	int* p = func(); // 接收func的返回值

	int b = 10; // 局部变量
	cout << "局部变量实参b的地址：" << &b << endl;
	// 实参地址与func2的形参地址并不相同，但是内存地址很接近，说明
	// 1、开辟了新的内存用来存放形参
	// 2、局部变量的实参也是存在栈区中
	func2(b);

	cout << "a的值为：" << *p << endl; // x86下返回10； x64下直接返回乱码
	cout << "a的值为：" << *p << endl; // x86下不返回10，返回乱码;x64下返回乱码

	system("pause");

	return 0;
}