#include<iostream>
using namespace std;

// 拷贝构造函数的调用时机

// 1、使用一个已经创建完毕的对象来初始化一个新对象

// 2、值传递的方式给函数参数传值

// 3、值方式返回局部对象

class Person5
{
public:
	Person5() {
		cout << "默认构造函数" << endl;
	}

	Person5(int age) {
		cout << "有参构造函数" << endl;
		m_Age = age;
	}

	Person5(const Person5& p) {
		cout << "拷贝构造函数" << endl;
		m_Age = p.m_Age;
	}

	~Person5() {
		cout << "默认析构函数" << endl;
	}

	int m_Age;
};

// 1、使用一个已经创建完毕的对象来初始化一个新对象
void test03() {
	Person5 p1(20);
	Person5 p2(p1);

	cout << "P2的年龄为" << p2.m_Age << endl;
}

// 2、值传递的方式给函数参数传值
void doWork(Person5 p) { // 值传递，会调用拷贝构造函数

}

void doWork2(Person5& p) { // 引用传递，不会调用拷贝构造函数

}

void test04() {
	Person5 p;
	// doWork(p); // 会调用 拷贝函数
	doWork2(p);
}


// 3.值方式返回局部对象

Person5 doWork3() {
	Person5 p1;

	return p1;	// 返回值（值传递），会调用拷贝构造函数
}

Person5* doWork4() {
	Person5 p1;

	return &p1;	// 返回引用（引用传递），不会调用拷贝构造函数
}

void test05() {
	//doWork3();
	doWork4();
}

int main10() {

	//test03();
	//test04();
	test05();

	system("pause");

	return 0;
}