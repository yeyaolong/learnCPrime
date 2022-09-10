#include<iostream>
using namespace std;

// 对象的初始化和清理

class Person3 {
	
public:
	// 1、用构造函数实现初始化
	// 没有返回值,也不用写void
	// 函数名与类的名称相同
	// 构造函数可以有参数,可以发生重载
	// 创建对象时，构造函数自动调用，而且只调用一次
	Person3()
	{
		cout << "person构造函数调用" << endl;
	}
	// 2、用析构函数实现清理
	// 没有返回值，也不用谢void
	// 函数名和类的名称相同，在名称前加 ~
	// 构造函数没有参数，不会发生重载
	// 对象销毁前，自动调用析构函数，且只会调用一次
	~Person3()
	{
		cout << "person析构函数调用" << endl;
	}
};



void test01() {
	Person3 p; // 自动调用构造函数，函数执行完成，建立在栈上的Person对象被释放，释放前自动调用析构函数
}

int main8() {

	// test01();
	Person3 p2; // 只调用构造函数，但是不会调用析构函数。因为main函数被暂停了，并没有结束。
	system("pause");

	return 0;
}