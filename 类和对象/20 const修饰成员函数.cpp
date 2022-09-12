#include<iostream>
using namespace std;

class Person20 {
public:
	int m_A;
	mutable int m_B; // 特殊变量，即使在常函数中也可以修改值
	// this指针的本质是  指针常量， 指针的指向是不可以修改的
	// Person* const this
	void showPerson() {
		m_A = 100;
		// 上面的写法相当于
		//this.m_A = 100;
		// 也就是说，虽然指针的指向的内存地址不可修改，但是值可以修改
		cout << "showPerson" << endl;
	}
	// 常量函数相当于将this指针改造成：指针常量+常量指针，也就是内存地址和值都不可以修改了
	// const Person* const this
	void showPerson2() const {
		//m_A = 100; // 表达式必须是可修改的左值
		// 上面的写法相当于
		//this.m_A = 100;

		m_B = 100; // 加上mutable关键字的，即使在常函数中也是可以修改的
		
		cout << "showPerson2 m_B = " << m_B << endl;
	}
};

void test21() {
	Person20 p;
	//p.showPerson();
	p.showPerson2();
}

// 常对象
void test22() {
	const Person20 p; // 在对象前加const，变为常对象
	//p.m_A = 100; // 不可修改的左值
	p.m_B = 100; // mutable修饰的成员，在常对象中也可以修改

	// 常对象只能调用常函数
	//p.showPerson(); // 编译器报错
	p.showPerson2();

}

int main() {

	//test21();

	test22();

	system("pause");

	return 0;
}