#include<iostream>
using namespace std;

// 函数模板

//  两个整型交换函数

void swapInt(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;

}


// 交换两个浮点型函数

void swapDouble(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

// 函数模板
template<typename T> // 声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;

	//swapInt(a, b);
	// 自动类型推导
	//mySwap(a, b);
	// 显式指定类型
	mySwap<int>(a, b);
	cout << "a = " << a << " b = " << b << endl;
}


void test02() {
	double a = 10.0;
	double b = 20.0;

	// swapDouble(a, b);
	// 自动类型推导
	//mySwap(a, b);
	// 显式指定类型
	mySwap<double>(a, b);

	cout << "a = " << a << " b = " << b << endl;
}



int main() {

	test01();

	test02();

	system("pause");

	return 0;
}