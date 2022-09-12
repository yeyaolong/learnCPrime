#include<iostream>
using namespace std;


// 初始化列表

class Person8 {
public:

	// 传统初始化操作（利用构造函数）
	/*Person8(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;

	}*/
	// 初始化列表初始化属性
	Person8() :m_A(10), m_B(20), m_C(30)
	{
		// 这样 m_A,m_B,m_C就是没法根据参数做改变了
	};
	Person8(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {

	};
	int m_A;
	int m_B;
	int m_C;
};

void test09() {
	//Person8 p(10, 20, 30);
	//Person8 p;
	Person8 p(30, 20, 10);
	cout << "m_A = " << p.m_A << "\tm_B = " << p.m_B << "\tm_C = " << p.m_C << endl;
}

int main13() {

	test09();

	system("pause");

	return 0;
}
