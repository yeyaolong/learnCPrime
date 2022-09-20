#include<iostream>
using namespace std;

class Base5 {
public:
	Base5() {
		m_A = 100;
	}

	int m_A;

	void func() {
		cout << "Base5 作用域中的 func 调用" << endl;
	}

	void func(int a) {
		cout << "Base5 作用域中 重载func 调用" << endl;
	}
};



class Son5 :public Base5 {
public:
	Son5() {
		m_A = 200;
	}
	int m_A;

	void func() {
		cout << "Son5 作用域中的 func 调用" << endl;
	}

	
};
// 同名成员属性处理
void test08() {
	Son5 s;
	cout << "s.m_A = " << s.m_A << endl;
	// 如果通过子类对象 访问到父类中的同名成员，需要加作用域
	cout << "Base5中的 m_A = " << s.Base5::m_A << endl;
}
// 同名成员函数处理
void test09() {
	Son5 s;
	s.func();

	s.Base5::func();
	/*
		 子类 不会继承 子类中已经有同名函数的父类的重载函数

		 因为，当子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	*/
	// s.func(1);
	s.Base5::func(1);
}

int main() {

	test08();

	test09();

	system("pause");

	return 0;
}