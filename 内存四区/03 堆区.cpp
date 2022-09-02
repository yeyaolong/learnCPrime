#include<iostream>
using namespace std;

int* func3() 
{
	// int a = new int(10);
	// return &a;

	// 利用new关键字可以将数据开辟到堆区
	// 指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10);// new 直接返回的是指针，要用指针接收
	return p;
}

int main() {
	// 在堆区开辟数据

	int* p = func3();
	// 存放在堆区的数据，程序员没有回收，在程序结束前就不会被回收
	// 所以不论是x86,还是x64的系统，不论执行几次，都是返回10
	cout << *p << endl; // 10
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}