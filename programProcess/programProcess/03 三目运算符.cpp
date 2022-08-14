#include<iostream>
using namespace std;

int main3() {

	int a = 0;
	int b = 0;

	cout << "请输入A:" << endl;
	cin >> a;

	cout << "请输入B: " << endl;
	cin >> b;

	int max = a;
	a > b ? max = a : max = b;

	cout << "最大值为：" << max << endl;
	// 三目运算 返回的是一个变量，而不是一个值
	int c = 10;
	int d = 20;
	
	(c > d ? c : d) = 100; // 如果 c > d ，那么将C赋值为100，否则将d赋值为100

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");

	return 0;
}