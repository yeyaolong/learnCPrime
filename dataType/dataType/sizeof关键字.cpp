#include<iostream>
using namespace std;

int main2() {

	// 利用sizeof 求出数据类型占用内存大小
	// 语法 sizeof( 数据类型/变量 )
	
	short num1 = 10;
	cout << "short变量占用内存空间：" << sizeof(short) << "字节" << endl;
	cout << "short变量占用内存空间：" << sizeof(num1) << "字节" << endl;

	int num2 = 10;
	cout << "int变量占用内存空间：" << sizeof(int) << "字节" << endl;
	cout << "int变量占用内存空间：" << sizeof(num2) << "字节" << endl;

	long num3 = 10;
	cout << "long变量占用内存空间：" << sizeof(long) << "字节" << endl;	// windows下4字节，linux 64bit 下是8字节
	cout << "long变量占用内存空间：" << sizeof(num3) << "字节" << endl;

	long long num4 = 10;
	cout << "long long 变量占用内存空间：" << sizeof(long long) << "字节" << endl;
	cout << "long long 变量占用内存空间：" << sizeof(num4) << "字节" << endl;

	system("pause");
	
	return 0;
}