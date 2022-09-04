#include<iostream>
using namespace std;

// 函数默认参数

// 如果传入了自己的数据，则用自己的数据，如果没有，就用默认值
// 语法：返回值类型 函数名 (形参 = 默认值) {}

int add(int a,  int b = 0, int c = 0)
{
	return a + b + c;
}
// 注意事项
// 1、如果某个位置已经有了默认参数，那么从各个位置往后，从左到右都必须有默认值
//int add2(int a, int b = 0, int c) { // 编译错误:默认实参不在形参结尾
//
//	return a + b + c;
//}
// 2、如果函数声明有了默认参数，函数的实现不能有默认参数
//int add3(int a, int b, int c = 0);
//
//int add3(int a, int b, int c = 0)	// error C2572: “add3”: 重定义默认参数 : 参数 1
//{
//	return a + b + c;
//}

int main1() {

	// int result = add(1, , 3); // 没有默认参数时，少传任何一个，编译器都会报错

	int result = add(1); // 有了默认参数

	cout << "result = " << result << endl;

	system("pause");

	return 0;
}