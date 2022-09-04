#include<iostream>
using namespace std;

// 交换函数

// 1、值传递

void mySwap01(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

// 2、地址传递
void mySwap02(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


// 3、引用传递

void mySwap03(int& a, int& b) {
	// 用法和值传递完全相同
	int tmp = a;
	a = b;
	b = tmp;
}

int main3() {
	
	int a = 10;
	int b = 20;
	mySwap01(a, b); // 值传递，实参不会发生变化

	cout << "a = " << a << "\tb = " << b << endl;
	int c = 30;
	int d = 40;
	mySwap02(&c, &d); // 地址传递，实参会发生变化

	cout << "c = " << c << "\tc = " << d << endl;

	int e = 50;
	int f = 60;
	mySwap03(e, f); // 引用传递，实参会发生变化

	cout << "e = " << e << "\tf = " << f << endl;

	system("pause");

	return 0;
}