#include<iostream>
using namespace std;

int main4() {

	cout << "字符型占有：" << sizeof(char) << "字节" << endl; // 1个字节

	char ch = 'a';
	// char ch2 = "a";  // 错误，不可用双引号
	char ch3 = 'ab';
	cout << "ch3 = " << ch3 << endl; // 'b'
	char ch4 = 'abc';
	cout << "ch4 = " << ch4 << endl; // 'c'
	char ch5 = 'abcd';
	cout << "ch5 = " << ch5 << endl; // 'd'
	cout << "'abcd'占用" << sizeof('abcd') << "字节" << endl;
	// char ch6 = 'abcde'; // 错误	 
	// 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放到存储单元
	/*
		a = 97
		b = 98
		...
		这里'ab','abc','abcd'可以编译通过，但是'abcde'却无法编译通过
		是因为
		“字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放到存储单元”
		字符型变量占有1个字节，也就是8位。'a'的ASCII码是97
	*/
	
	// 字符型变量对应的ASCII编码
	cout << (int)'a' << endl; // 97
	cout << (int)'A' << endl; // 65
	cout << (char)97 << endl; // 'a'

	system("pause");

	return 0;
}