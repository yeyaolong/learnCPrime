#include<iostream>
#include<string>
using namespace std;

// 函数调用运算符重载


// 打印输出类

class MyPrint {
public:
	// 重载函数调用运算符
	void operator() (string test) {
		cout << test << endl;
	}
};

class MyAdd {
public:
	int operator() (int num1, int num2) {
		return num1 + num2;
	}
};

void myPrint02(string test) {
	cout << test << endl;
}

void test08() {
	MyPrint myprint;
	myprint("Hello World");

	myPrint02("Hello World");
}

void test09() {
	MyAdd myadd;

	int result = myadd(10, 20);

	cout << result << endl;

	// 匿名函数对象
	// MyAdd() 创建一个匿名对象
	// MyAdd() (100, 100) 创建一个匿名对象后，调用重载的运算符() 函数
	cout << MyAdd()(100, 100) << endl;
}

int main() {

	test08();

	test09();

	system("pause");

	return 0;
}