#include<iostream>
using namespace std;

int main5() {
	// 用反斜杠来表达转义字符
	/*
		\n 换行
		\t 水平制表符
		\\ 反斜杠
	*/

	cout << "hello world" << "\n" << "嘟嘟嘟"; // endl与 \n 用处一样，都是换行的意思。endl表示结束本行
	cout << endl;
	cout << "\\" << endl;
	cout << "aaa\tbbb" << endl; // 也就是tab键的效果。
	
	cout << sizeof('\t') << endl;// 一个tab有1个字节(因为都是ASCII码表示的)
	system("pause");
	return 0;
}