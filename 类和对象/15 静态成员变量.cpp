#include<iostream>
using namespace std;

// 静态成员 变量
class Person11 {
public:
	// 1、静态变量所有对象共享同一份数据
	// 2、编译阶段就分配内存
	// 3、类内声明，类外初始化操作
	static int m_A;
// 静态成员变量访问权限
private:
	static int m_B;
};

int Person11::m_A = 100; // 类外初始化
int Person11::m_B = 200;
void test11() {
	Person11 p;
	cout << p.m_A << endl; 	// 没有做类外初始化，报错：无法解析的外部符号 "public: static int Person11::m_A" (?m_A@Person11@@2HA)

	Person11 p2;
	p2.m_A = 200;

	cout << p.m_A << endl; 	// 静态变量所有对象共享同一份数据
}

void test12() {
	// 静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	// 因此静态成员变量有两种访问方式

	// 1、通过对象进行访问
	Person11 p;
	cout << p.m_A << endl;

	// 2、通过类名进行访问
	cout << Person11::m_A << endl;


	//cout << Person11::m_B << endl; // private 不能在类外直接访问
	//cout << p.m_B << endl; // private 不能在类外直接访问
}

int main15() {

	// test11();
	test12();

	system("pause");

	return 0;
}