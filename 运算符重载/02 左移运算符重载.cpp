#include<iostream>
using namespace std;

// 左移运算符重载
class Person2 {
	friend ostream& operator<<(ostream& cout, Person2& p);
public:
	Person2(int a, int b) {
		m_A = a;
		m_B = b;
	}
private:
	// 利用成员函数重载 左移运算符
	// p.operator<<(cout) 简化版本 p << cout
	// 不会利用成员函数重载<<运算符，因为这样cout 就一直处于右侧了
	/*void operator<<( cout ) {

	}*/

	int m_A;
	int m_B;
};

// 只能利用全局函数重载左移运算符
ostream& operator<<(ostream &cout, Person2 &p) { // 本质 operator<<(cout, p) 简化形式 cout << p
	cout << "m_A = " << p.m_A << "\tm_B = " << p.m_B;

	return cout;
}

void test02() {
	Person2 p(10, 10);
	//p.m_A = 10;
	//p.m_B = 10;

	//cout << p.m_A << endl;

	cout << p << "hello World" << endl; // 没有找到接受“Person”类型的右操作数的运算符(或没有可接受的转换)
}

int main() {

	test02();

	system("pause");

	return 0;
}