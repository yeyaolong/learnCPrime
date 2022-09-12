#include<iostream>
using namespace std;

// this指针的使用

// 1、解决名称冲突

// 2、返回对象本身用*this


class Person18 {
public:

	Person18(int age) {
		// 1、解决名称冲突
		// age = age; // 赋值失败（但是编译不报错），因为 这里等号左侧age不是Person18::age
		this->age = age; // this指针指向的是被调用的成员函数所属的对象
	}

	int age;
	// 返回引用 可以链式调用 并且原值会被改变
	Person18& PersonAddAge(Person18& p) {
		this->age += p.age;
		return *this;
	}
	// 返回值 可以链式调用 但是原来的值不会再继续改变了
	Person18 PersonAddAge2(Person18& p) {
		this->age += p.age;
		return *this;
	}
};


void test18() {
	Person18 p1(10);

	cout << "p1的年龄为" << p1.age << endl;
}

// 2、返回对象本身用*this
void test19() {
	Person18 p1(10);
	Person18 p2(10);
	//p2.PersonAddAge(p1);

	//cout << "p2的年龄为：" << p2.age << endl; // 20

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl; // 40

	p2.PersonAddAge2(p1).PersonAddAge2(p1).PersonAddAge2(p1); // 此时p2的初值已经等于40了，因为只有一次+10有效，有效返回50
	cout << "p2的年龄为：" << p2.age << endl; // 50 
}

int main18() {

	//test18();
	test19();

	system("pause");

	return 0;
}