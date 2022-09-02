#include<iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main1() {

	// 全局区
	// 存放：全局变量，静态变量，全局的常量
	
	// 创建一个局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << &a << endl;
	cout << "局部变量b的地址为：" << &b << endl;

	cout << "全局变量a的地址为：" << &g_a << endl;
	cout << "全局变量b的地址为：" << &g_b << endl;

	// 静态变量 在普通变量前面加上 static 关键字
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量a的地址为：" << &s_a << endl;
	cout << "静态变量b的地址为：" << &s_b << endl;

	// 常量 字符串常量 或 const 修饰的变量
	cout << "字符串常量的地址为：" << &"Hello World" << endl;
	// const 修饰的全局变量
	cout << "全局常量a的地址为：" << &c_g_a << endl;
	cout << "全局常量b的地址为：" << &c_g_b << endl;

	// const 修饰的局部常量
	
	const int c_a = 10; 
	const int c_b = 10;
	cout << "局部常量a的地址为：" << &c_a << endl;
	cout << "局部常量b的地址为：" << &c_b << endl;

	// 可以发现，
	// 局部常量和局部变量的地址非常接近，
	// 说明局部变量和局部常量放在同一块内存区中
	// 全局常量与全局变量与静态变量的地址非常接近
	// 说明这三种数据类型的数据放在同一块内存区中（全局区）


	system("pause");

	return 0;
}