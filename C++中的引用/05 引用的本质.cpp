#include<iostream>
using namespace std;
// 引用的本质是，指针常量
// 
// 发现是引用，转换为 int* const ref = &a;
void func(int& ref) {
	ref = 100;	// 发现ref是引用，自动帮我们转换为: *ref = 100;
}

int main5() {

	int a = 10;

	int& ref = a;

	ref = 20;  // 内部发现ref是引用，自动帮我们转换为: *ref = 20;

	cout << "a = " << a << endl;

	cout << "ref = " << ref << endl; // 内部发现ref是引用，自动转换成 *ref

	func(a);

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl; // 内部发现ref是引用，自动转换成 *ref

	system("pause");

	return 0;
}