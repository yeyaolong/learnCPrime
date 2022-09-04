#include<iostream>
using namespace std;

// 引用做函数的返回值
// 1、不要返回局部变量的引用

int& test01()
{
	int a = 10; // 局部变量存放在四区中栈区

	return a;
}

// 2、函数的调用可以作为左值

int& test02()
{
	static int a = 10; // 静态变量会被放到全局区中。直到整个程序结束才会释放

	return a;
}

int main4() {

	int& ref = test01();
	
	cout << "ref = " << ref << endl; // x64环境直接返回乱码，因为局部变量在函数结束后就，内存被收回了，x64返回了野指针。 x86第一次输出是10
	cout << "ref = " << ref << endl; // x86第二次输出是乱码

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;	// 10
	cout << "ref2 = " << ref2 << endl;	// 10
	
	test02() = 1000; // 函数调用作为左值，如果函数返回的是引用，那么这个函数可以作为左值

	cout << "ref2 = " << ref2 << endl; // 1000

	system("pause");

	return 0;
}