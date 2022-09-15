#include<iostream>
using namespace std;

class Person4 {
public:
	Person4(int age) {
		m_Age = new int(age);
	}
	
	int* m_Age;

	// 重载赋值运算符
	Person4& operator=(Person4& p) {
		// 编译器提供的浅拷贝，
		// m_Age = p.m_Age;
		// 我们自己重载赋值运算符，改成深拷贝
		/*
			先判断是否有属性在堆区，如果有
			先释放干净
			然后再深拷贝
		*/
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);

		return *this;
	}

	~Person4() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
};

void test05() {
	Person4 p1(18);

	Person4 p2(20);


	// 重载赋值操作前，编译器提供的是浅拷贝赋值
	// p2, p1指向同一个堆区内存。这样p2释放一次内存后，p1又释放一次。对同一个内存释放两次报错
	p2 = p1; // 赋值操作.

	cout << "p1的年龄为" << *p1.m_Age << endl;

	cout << "p2的年龄为" << *p2.m_Age << endl;
}

void test06() {
	Person4 p1(18);

	Person4 p2(20);

	Person4 p3(40);

	p3 = p2 = p1; // 赋值操作.

	cout << "p1的年龄为" << *p1.m_Age << endl;

	cout << "p2的年龄为" << *p2.m_Age << endl;

	cout << "p3的年龄为" << *p3.m_Age << endl;
}

int main() {

	//test05();
	/*int a = 10;
	int b = 20;
	int c = 10;

	c = b = a;

	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;*/
	test06();
	system("pause");

	return 0;
}