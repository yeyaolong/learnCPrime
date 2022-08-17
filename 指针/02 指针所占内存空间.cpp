#include<iostream>
using namespace std;

int main2() {

	// 在32位的操作系统中，不论是什么类型的指针，都占用4个字节空间.
	// 我电脑是x64的，所以占用8个字节
	int a = 20;
	int* p_a = &a;
	cout << sizeof(p_a) << endl; // 8
	cout << sizeof(*p_a) << endl; // 4，解指针后是int，所以返回4
	double b = 2.0;
	double* p_b = &b;
	cout << sizeof(p_b) << endl; // 8
	cout << sizeof(*p_b) << endl; // 8, 解指针后是double,所以返回8
	char c = 'c';
	char* p_c = &c;
	cout << sizeof(p_c) << endl; // 8
	cout << sizeof(*p_c) << endl; // 1, 解指针后是char,所以返回1
	system("pause");

	return 0;
}