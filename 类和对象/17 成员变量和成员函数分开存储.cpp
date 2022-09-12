#include<iostream>
using namespace std;

// 成员变量和成员函数的分开存储

class Person17 {
	int m_A; // 非静态成员变量 会挂在实例化后的对象内存中

	static int m_B; // 静态成员变量 不会挂在实例化后的对象内存中
	// 成员函数 不会挂在实例化后的对象内存中
	void func() {

	}
	// 静态成员函数 不会挂在实例化后的对象内存中
	static void func2() {}
};

int Person17::m_B = 0;

void test14() {
	
	Person17 p; 
	// 空对象占用的内存空间 1 字节
	// C++编译器 每个空对象也分配一个字节的空间，为了区分空对象占内存的位置。
	// 每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test15() {
	Person17 p;
	// 4个字节，因为Person 中只有一个int对象，一个int对象占用4个字节
	cout << "size of p = " << sizeof(p) << endl;
}

void test16() {
	Person17 p;
	// 4个字节，因为Person中 m_A是int对象，一个int对象占用4个字节
	// m_B是静态成员，静态成员不是与实例化后的对象存储在一起（静态成员包括 静态变量和静态函数）
	cout << "size of p = " << sizeof(p) << endl;
}


void test17() {
	Person17 p;
	// 成员函数也不是存在实例化后的对象上的
	cout << "size of p = " << sizeof(p) << endl;
}

int main() {

	//test14();
	//test16();
	test17();

	system("pause");

	return 0;

}