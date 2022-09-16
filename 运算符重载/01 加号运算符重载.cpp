#include<iostream>
#include<string>
using namespace std;

// 加号运算符重载

class Person {
public:
	// 1、成员函数重载+号
	Person operator+(Person& p) {
		cout << "调用了" + this->m_Name << "的成员函数" << endl;
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;

		return temp;
	}
	int m_A;
	int m_B;
	string m_Name;
};

// 2、通过全局函数重载+号
/*
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;

	return temp;
}
*/
/*
// 再做一个函数重载
Person operator+(Person& p1, int p2) {
	Person temp;
	temp.m_A = p1.m_A + p2;
	temp.m_B = p1.m_B + p2;

	return temp;
}
*/
void test01() {
	Person p1;
	p1.m_Name = "p1";
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_Name = "p2";
	p2.m_A = 10;
	p2.m_B = 10;

	
	// 成员函数的本质调用
	// Person p3 = p1.operator+(p2);
	// 被编译器简化为
	//Person p3 = p1 + p2; // 没有与这些操作数匹配的"+"运算符
	// 全局函数的本质调用
	//Person p3 = operator+(p1, p2);
	// 被编译器简化为
	Person p3 = p1 + p2; // 调用了p1的成员函数
	p3 = p2 + p1; // 调用了p2的成员函数
	
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;


	// 运算符重载 也可以发生函数重载
	//Person p4 = p1 + 30;
	//cout << "p4.m_A = " << p4.m_A << endl;
	//cout << "p4.m_B = " << p4.m_B << endl;


}





int main1() {

	test01();

	system("pause");

	return 0;
}