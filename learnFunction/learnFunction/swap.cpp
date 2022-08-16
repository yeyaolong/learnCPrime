#include "swap.h" // 用双引号，表示我们自定义的头文件


void swap2(int a, int b) {

	cout << "交换前，a = " << a << " b = " << b << endl;

	int tmp = a;
	a = b;
	b = tmp;

	cout << "交换后，a = " << a << " b = " << b << endl;
}