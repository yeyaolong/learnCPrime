#include<iostream>
using namespace std;

// 纯虚函数和抽象类

class Base4 {
public:
	// 纯虚函数
	// 只要有一个纯虚函数，这个类就是抽象类
	// 抽象类特点：
	// 无法实例化对象
	// 抽象类的子类，如果不重写父类中的纯虚函数，也属于抽象类,无法实例化
	virtual void func() = 0;
	// 不写 = 0 ，就属于纯虚函数
	//virtual void func2();
};

class Son4:public Base4 {
public:

};

class Son5 :public Base4 {
public:
	virtual void func() {
		cout << "func函数调用" << endl;
	}
	virtual void fun2() {}
};

void test06() {
	// 抽象类无法实例化对象
	//Base4 b;
	//new Base4;
	// 子类如果不实现父类的抽象函数，也会变成抽象类，无法实例化
	//Son4 s;
	//new Son4;
	// 子类实现父类的抽象函数，可以实例化了
	Son5 s;

	Base4* base = new Son5;
	base->func();
}


int main4() {

	test06();

	system("pause");

	return 0;
}