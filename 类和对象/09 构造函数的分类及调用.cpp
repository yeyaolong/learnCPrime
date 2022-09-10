#include<iostream>
using namespace std;

// 构造函数的分类及调用
// 分类
// 按照参数分类：无参构造(默认构造)、有参构造
// 按照类型分类：普通构造函数、拷贝构造函数
// 调用

class Person4 {
private:
	int age;
public:
	// 构造函数
	Person4() {
		cout << "构造函数调用 无参构造" << endl;
	}
	Person4(int a) {
		age = a;
		cout << "构造函数调用 有参构造 a = " << a << endl;
	}
	// 拷贝构造函数
	// 1、const
	// 2、引用
	Person4(const Person4 &p) {
		// 将传入的人身上的属性，拷贝到新对象上
		age = p.age;
		cout << "拷贝构造函数调用" << endl;
	}
	// 析构函数
	~Person4() {
		cout << "析构函数调用" << endl;
	}
};
// 调用
void test02() {
	
	// Person4 p; // 默认构造函数调用
	// 1、括号法
	Person4 p2(10); // 调用有参构造函数
	Person4 p3(p2); // 调用拷贝构造函数
	// 2、显示法

	// 3、隐式转换法
}

int main() {

	test02();

	system("pause");

	return 0;
}