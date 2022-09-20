#include<iostream>
using namespace std;

class Base4 {
public:
	Base4() {
		cout << "Base4类构造函数" << endl;
	}

	~Base4() {
		cout << "Base4析构函数" << endl;
	}
};

class Son4: public Base4 {
public:
	Son4() {
		cout << "Son4类构造函数" << endl;
	}

	~Son4() {
		cout << "Son4析构函数" << endl;
	}
};



void test06() {
	Base4 b;
}

void test07() {
	/*
		Base4类构造函数
		Son4类构造函数
		Son4析构函数
		Base4析构函数

		因为局部变量存储在栈区上，栈区的特点是，先进后出
		所以Base4类构造函数最先调用，Base4析构函数最后调用
	*/
	Son4 s;
}

int main4() {

	//test06();

	test07();

	system("pause");

	return 0;
}