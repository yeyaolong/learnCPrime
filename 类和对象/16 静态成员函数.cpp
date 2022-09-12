#include<iostream>
using namespace std;
// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person12 {
public:
	// 静态成员函数
	static void func() {
		m_A = 100; // 静态成员函数能访问静态成员变量
		//m_B = 9; // 静态成员函数不能访问非静态成员变量
		cout << "static void func调用" << endl;
	}

	static int m_A;
	int m_B;
private:
	// 静态成员函数也是有访问权限的
	static void func2() {
		cout << "static void fun2调用" << endl;
	}
};

int Person12::m_A = 0;

void test13() {
	// 1、通过对象访问
	Person12 p;
	p.func();
	// 2、通过类名访问
	Person12::func();
	//p.func2(); // private 不能直接调用
}

int main16() {


	test13();

	system("pause");

	return 0;
}