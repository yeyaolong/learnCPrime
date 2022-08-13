#include<iostream>
#include<string> // 用C++风格的字符串时，需要包含这个头文件
using namespace std;

int main6() {

	// C风格字符串
	char str1[] = "字符串变量";
	cout << str1 << endl;

	// C++风格字符串
	// 需要先 #include<string>头文件，才能使用string类型
	// 虽然不写头文件，在VS 2022中没有报错，可能是编译器做了处理
	// 但是为了可移植性和良好的可编程风格，还是要写上才行
	string str2 = "字符串变量";
	cout << str2 << endl;

	system("pause");

	return 0;
}