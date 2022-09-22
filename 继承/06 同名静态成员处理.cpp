#include<iostream>
using namespace std;

class Base6 {
public:
	static void func() {
		cout << "Base6 static void func()" << endl;
	}

	static void func(int a) {
		cout << "Base6 static void func(int a)" << endl;
	}

	static int m_A;
};

int Base6::m_A = 100;

class Son6: public Base6 {
public:
	// 上一节讲过，子类中只有有一个同名的成员的函数，子类会覆盖掉父类中所有同名成员函数
	// 如果想访问父类中被隐藏的同名函数，则需要加作用域
	/*static void func() {
		cout << "Son6 static void func()" << endl;
	}*/
};

// 同名静态成员
void test10() {
	Son6 s;
	cout << "通过对象访问Son 下的 m_A = " << s.m_A << endl; // 通过对象访问
	cout << "直接通过类名访问Son 下的 m_A = " << Son6::m_A << endl; // 直接通过类名访问
	cout << "通过对象访问 Base6 下的 m_A = " << s.Base6::m_A << endl;
	cout << "直接通过类名访问 Base6 下的 m_A = " << Base6::m_A << endl;
	cout << "通过子类的类名访问 父类 下的 m_A = " << Son6::Base6::m_A << endl;
}
void test11() {
	Son6 s;
	// 通过对象访问
	s.func();
	s.func(10);
	s.Base6::func();
	s.Base6::func(10);
	// 直接通过类访问
	Son6::func();
	Son6::func(10);

	Son6::Base6::func();
	Son6::Base6::func(10);
}

int main6() {

	// test10();
	test11();

	system("pause");

	return 0;
}