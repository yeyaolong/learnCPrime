#include<iostream>
using namespace std;

int main5() {

	// 比较运算符
	// ==
	int a = 10;
	int b = 20;
	// 这里要加小括号，因为移位运算符 << 比 比较运算符 优先级高
	cout << (a == b) << endl;  // 0，假

	// !=
	cout << (a != b) << endl; // 1
	// >
	cout << (a > b) << endl; // 0
	// <
	cout << (a < b) << endl; // 1
	// >=
	cout << (a >= b) << endl; // 0
	// <=
	cout << (a <= b) << endl; // 1

	system("pause");

	return 0;

}