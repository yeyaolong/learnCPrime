#include<iostream>
#include<iomanip>
using namespace std;

int main3() {

	cout << "单精度数占用内存:" << sizeof(float) << endl;	// 4
	cout << "双精度变量占用内存:" << sizeof(double) << endl;	// 8
	
	// 默认不做任何处理的话，默认是只显示 6位小数
	// #include<iomanip> 后，再使用 setprecision(有效位数) 设置有效数字位数
	// 方便观察不同精度下的数据损失

	float num1 = 3.14159265359; // 3.14159265359会被认为是double类型，相当于 一个double数据，赋值给一个float变量。造成精度丢失
	cout << "num1的值" << setprecision(11) << num1 << " num1变量占用内存:" << sizeof(num1) << endl;	// num1依然是float类型，返回4个字节

	float num2 = 3.14159265359f; // 10.0f会被认为是一个float类型的数据赋值给一个float类型的变量num2
	cout << "num2的值" << setprecision(11) << num2 << " num2变量占用内存:" << sizeof(num2) << endl;	// 4
	
	// float num3 = 10f; // 这种写法直接报错

	double num4 = 3.14159265359; // 这种写法会被认为是double类型的数据被赋值给double类型变量num4
	cout << "num4的值" << setprecision(11) << num4 << " num4变量占用内存:" << sizeof(num4) << endl;	// 8
	 // 这种写法会被认为是float类型数据复制个double类型变量num5,单精度数占4个字节，放到8个字节的内存中不会造成精度丢失.
	// 但是, 3.14159265359f 这种写法会先把3.14159265359改造成单精度值
	// 也就是说，这里是先损失一部分精度后，再赋值给双精度数num5
	double num5 = 3.14159265359f;
	cout << "num5的值" << setprecision(11) << num5 << " num5变量占用内存:" << sizeof(num5) << endl;	// 8

	// 科学计数法
	float num6 = 3e2; // 3 乘以 10 的 2 次方
	cout << "num6的值:" << num6 << endl;

	float num7 = 3e-2; // 3 乘以 0.1 的 2 次方

	cout << "num7的值" << num7 << endl;
	

	


	system("pause");

	return 0;
}