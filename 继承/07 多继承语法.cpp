#include<iostream>
using namespace std;

class Base7 {
public:
	Base7() {
		m_A = 100;
	}
	int m_A;
};

class Base8 {
public:
	Base8() {
		m_B = 200;
		m_A = 200;
	}
	int m_B;
	int m_A;
};
// 语法 class子类:继承方式 父类1,继承方式 父类2
class Son7 :public Base7, public Base8 {
public:
	Son7() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test12() {
	Son7 s;
	// 子类占用内存空间是两个父类 + 子类本身 所占空间
	cout << "sizeof Son7 = " << sizeof(s) << endl;

	// cout << "s.m_A = " << s.m_A << endl; // 报错，Son7::m_A不明确。
	// 需要加上作用域
	cout << "s.Base7::m_A = " << s.Base7::m_A << endl;
	cout << "s.Base8::m_A = " << s.Base8::m_A << endl;
}

int main7() {

	test12();

	system("pause");

	return 0;
}