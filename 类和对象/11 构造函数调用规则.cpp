#include<iostream>
using namespace std;

// 构造函数调用规则

// 1、只要创建一个类，C++会给每个类都添加至少3个函数
// 默认构造函数 空实现
// 拷贝构造 值拷贝
// 析构函数 空实现

class Person6 {
public:
	int m_Age;

	Person6() {
		cout << "Person默认构造" << endl;
	}

	Person6(int age) {
		cout << "Person有参默认构造" << endl;
		m_Age = age;
	}

	Person6(const Person6& p) {
		cout << "Person拷贝默认构造" << endl;
		m_Age = p.m_Age;
	}

	~Person6() {
		cout << "Person析构函数调用" << endl;
	}
};

//void test06() {
//	Person6 p;
//	p.m_Age = 18;
//
//	Person6 p2(p);	// 注释掉拷贝构造函数后，仍然能执行,因为C++会提供
//	
//	cout << "p2的年龄为" << p2.m_Age << endl;
//}

void test07() {
	//Person6 p;	// 如果提供了有参构造函数，程序员又没有提供无参构造函数，这里会报错。
	Person6 p(20);

	Person6 p2(p);

	cout << "p2的年龄为：" << p2.m_Age << endl;


}

int main11() {

	//test06();
	test07();

	system("pause");

	return 0;
}