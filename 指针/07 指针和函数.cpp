#include<iostream>
using namespace std;

void swap01(int a, int b) {
	int tmp = a;
	a = b;
	b = a;
}

void swap02(int* p1, int* p2) {
	int p = *p1;
	*p1 = *p2;
	*p2 = p;
	
}

int main7() {

	// 指针和函数
	// 1、值传递
	int a = 10;
	int b = 20;
	swap01(a, b);

	cout << "swap01 a = " << a << "\tb = " << b << endl;

	// 2、地址传递
	// 可以修改实参
	swap02(&a, &b);
	cout << "swap02 a = " << a << "\tb = " << b << endl;

	system("pause");

	return 0;
}