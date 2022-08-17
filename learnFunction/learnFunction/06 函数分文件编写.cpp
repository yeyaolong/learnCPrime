#include<iostream>
#include "swap.h"
using namespace std;

// 函数分文件编写
// 实现两个数字进行交换的函数
//void swap2(int a, int b) {
//
//	cout << "交换前，a = " << a << " b = " << b << endl;
//
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	cout << "交换后，a = " << a << " b = " << b << endl;
//}

// 1、创建.h后缀名头文件(swap.h) ---> 用来写函数声明
// 2、创建.cpp后缀名的源文件（swap.cpp） --->  用来写函数定义
// 3、在swap.h头文件中写函数声明
// 4、在swap.cpp文件中引入头文件#include "swap.h" // 必须用双引号
// 5、此时swap.cpp文件中报错，cout和endl找不到,
// 我们需要在swap.h中iostream, #include<iostream>
// 并且将swap.h放到命名空间中, using namespace std;
// 6、在要使用头文件的文件中，
// 比如 06 函数文件编写.cpp中加上头文件 #include "swap.h" // 必须用双引号，表示是自定义头文件

int main() {

	swap2(10, 20);

	system("pause");

	return 0;
}