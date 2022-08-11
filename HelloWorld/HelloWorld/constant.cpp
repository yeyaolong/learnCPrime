#include<iostream>
using namespace std;

/*
常量

const修饰的变量
const 数据类型 常量名 = 常量值

宏常量，通常定义在文件上方
#define 常量名 常量值


*/


// 宏常量 错误写法
/*
#define Day 7;

这会让 Day 赋值为 7;
也就是 Day的值为 "7+分号"
*/

#define Day 7 // 一周7天

int main4() {
	// int Day // 宏常量不可重新定义
	// Day = 8; // 宏常量不可修改

	cout << "一周总共有:" << Day << "天" << endl;

	// 2、const 修饰的变量
	const int Month = 12;
	// month = 13; // 常量不可修改
	cout << "一年总共有:" << Month << "月" << endl;
	system("pause");
	return 0;
}